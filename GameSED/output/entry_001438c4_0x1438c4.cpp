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

// Function: entry_001438c4
// Address: 0x1438c4 - 0x1438f0
void entry_001438c4_0x1438c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001438c4_0x1438c4");
#endif

    ctx->pc = 0x1438c4u;

    // 0x1438c4: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x1438c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1438c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1438c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1438cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1438ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1438d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1438d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1438d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1438D4u;
    {
        const bool branch_taken_0x1438d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1438D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438D4u;
        // 0x1438d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438d4) {
            ctx->pc = 0x1438F0u;
            return;
        }
    }
    ctx->pc = 0x1438DCu;
    // 0x1438dc: 0x96830024  lhu         $v1, 0x24($s4)
    ctx->pc = 0x1438dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1438e0: 0x96820026  lhu         $v0, 0x26($s4)
    ctx->pc = 0x1438e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 38)));
    // 0x1438e4: 0xa6430178  sh          $v1, 0x178($s2)
    ctx->pc = 0x1438e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 376), (uint16_t)GPR_U32(ctx, 3));
    // 0x1438e8: 0xc0654b2  jal         func_1952C8
    ctx->pc = 0x1438E8u;
    SET_GPR_U32(ctx, 31, 0x1438F0u);
    ctx->pc = 0x1438ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1438E8u;
    // 0x1438ec: 0xa642017a  sh          $v0, 0x17A($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 378), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1952C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1952C8u, 0x1438E8u, 0x1438F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438F0u;
}
