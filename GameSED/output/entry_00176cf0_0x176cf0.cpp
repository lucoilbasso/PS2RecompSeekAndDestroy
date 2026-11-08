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

// Function: entry_00176cf0
// Address: 0x176cf0 - 0x176d30
void entry_00176cf0_0x176cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176cf0_0x176cf0");
#endif

    switch (ctx->pc) {
        case 0x176cf8u: goto label_176cf8;
        default: break;
    }

    ctx->pc = 0x176cf0u;

label_176cf0:
    // 0x176cf0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176CF0u;
    SET_GPR_U32(ctx, 31, 0x176CF8u);
    ctx->pc = 0x176CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CF0u;
    // 0x176cf4: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176CF0u, 0x176CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CF8u;
label_176cf8:
    // 0x176cf8: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x176cfc: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x176CFCu;
    {
        const bool branch_taken_0x176cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CFCu;
        // 0x176d00: 0x8f858c54  lw          $a1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cfc) {
            ctx->pc = 0x176CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176cf0;
        }
    }
    ctx->pc = 0x176D04u;
    // 0x176d04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x176d0c: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x176d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176d10: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x176D10u;
    {
        const bool branch_taken_0x176d10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D10u;
        // 0x176d14: 0xacb10020  sw          $s1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d10) {
            ctx->pc = 0x176D30u;
            return;
        }
    }
    ctx->pc = 0x176D18u;
    // 0x176d18: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176d1c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176d20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176d24: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176d28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176D28u;
    {
        const bool branch_taken_0x176d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D28u;
        // 0x176d2c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d28) {
            ctx->pc = 0x176D3Cu;
            return;
        }
    }
    ctx->pc = 0x176D30u;
}
