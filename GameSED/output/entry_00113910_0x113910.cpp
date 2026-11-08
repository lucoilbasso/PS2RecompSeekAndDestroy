#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00113910
// Address: 0x113910 - 0x113950
void entry_00113910_0x113910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113910_0x113910");
#endif

    switch (ctx->pc) {
        case 0x113918u: goto label_113918;
        default: break;
    }

    ctx->pc = 0x113910u;

    // 0x113910: 0xc06555a  jal         func_195568
    ctx->pc = 0x113910u;
    SET_GPR_U32(ctx, 31, 0x113918u);
    ctx->pc = 0x195568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195568u, 0x113910u, 0x113918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113918u;
label_113918:
    // 0x113918: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x113918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x11391c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x11391cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113924: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x113924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x113928: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x113928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11392c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11392Cu;
    {
        const bool branch_taken_0x11392c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11392Cu;
        // 0x113930: 0x32630300  andi        $v1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11392c) {
            ctx->pc = 0x113950u;
            return;
        }
    }
    ctx->pc = 0x113934u;
    // 0x113934: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113938: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x11393c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113940: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x113940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x113944: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x113944u;
    {
        const bool branch_taken_0x113944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113944u;
        // 0x113948: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113944) {
            ctx->pc = 0x113978u;
            return;
        }
    }
    ctx->pc = 0x11394Cu;
    // 0x11394c: 0x0  nop
    ctx->pc = 0x11394cu;
    // NOP
    ctx->pc = 0x113950u;
}
