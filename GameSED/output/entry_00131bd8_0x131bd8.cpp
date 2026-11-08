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

// Function: entry_00131bd8
// Address: 0x131bd8 - 0x131c0c
void entry_00131bd8_0x131bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131bd8_0x131bd8");
#endif

    switch (ctx->pc) {
        case 0x131bf4u: goto label_131bf4;
        default: break;
    }

    ctx->pc = 0x131bd8u;

    // 0x131bd8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x131bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x131bdc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x131bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131be4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x131be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x131be8: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x131be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x131bec: 0xc048464  jal         func_121190
    ctx->pc = 0x131BECu;
    SET_GPR_U32(ctx, 31, 0x131BF4u);
    ctx->pc = 0x131BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BECu;
    // 0x131bf0: 0x62a00b  movn        $s4, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121190u, 0x131BECu, 0x131BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BF4u;
label_131bf4:
    // 0x131bf4: 0x2a2900a  movz        $s2, $s5, $v0
    ctx->pc = 0x131bf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 21));
    // 0x131bf8: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x131BF8u;
    {
        const bool branch_taken_0x131bf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x131bf8) {
            ctx->pc = 0x131BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131BF8u;
            // 0x131bfc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C10u;
            return;
        }
    }
    ctx->pc = 0x131C00u;
    // 0x131c00: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x131c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x131c04: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x131C04u;
    {
        const bool branch_taken_0x131c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131c04) {
            ctx->pc = 0x131C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131C04u;
            // 0x131c08: 0x8e0500e8  lw          $a1, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B90u;
            return;
        }
    }
    ctx->pc = 0x131C0Cu;
}
