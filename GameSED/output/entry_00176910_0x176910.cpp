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

// Function: entry_00176910
// Address: 0x176910 - 0x176950
void entry_00176910_0x176910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176910_0x176910");
#endif

    switch (ctx->pc) {
        case 0x176918u: goto label_176918;
        default: break;
    }

    ctx->pc = 0x176910u;

label_176910:
    // 0x176910: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176910u;
    SET_GPR_U32(ctx, 31, 0x176918u);
    ctx->pc = 0x176914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176910u;
    // 0x176914: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176910u, 0x176918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176918u;
label_176918:
    // 0x176918: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x17691c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17691Cu;
    {
        const bool branch_taken_0x17691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17691Cu;
        // 0x176920: 0x8f868c54  lw          $a2, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17691c) {
            ctx->pc = 0x176910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176910;
        }
    }
    ctx->pc = 0x176924u;
    // 0x176924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176928: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17692c: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x17692cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176930: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x176930u;
    {
        const bool branch_taken_0x176930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x176934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176930u;
        // 0x176934: 0xacd10020  sw          $s1, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176930) {
            ctx->pc = 0x176950u;
            return;
        }
    }
    ctx->pc = 0x176938u;
    // 0x176938: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x17693c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17693cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176940: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176944: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176948: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176948u;
    {
        const bool branch_taken_0x176948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176948u;
        // 0x17694c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176948) {
            ctx->pc = 0x17695Cu;
            return;
        }
    }
    ctx->pc = 0x176950u;
}
