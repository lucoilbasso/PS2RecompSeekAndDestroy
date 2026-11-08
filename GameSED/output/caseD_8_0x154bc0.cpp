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

// Function: caseD_8
// Address: 0x154bc0 - 0x154c08
void caseD_8_0x154bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x154bc0");
#endif

    switch (ctx->pc) {
        case 0x154bc8u: goto label_154bc8;
        case 0x154c00u: goto label_154c00;
        default: break;
    }

    ctx->pc = 0x154bc0u;

    // 0x154bc0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154BC0u;
    SET_GPR_U32(ctx, 31, 0x154BC8u);
    ctx->pc = 0x154BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BC0u;
    // 0x154bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154BC0u, 0x154BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BC8u;
label_154bc8:
    // 0x154bc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x154bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154bd0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x154BD0u;
    {
        const bool branch_taken_0x154bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BD0u;
        // 0x154bd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bd0) {
            ctx->pc = 0x154C08u;
            return;
        }
    }
    ctx->pc = 0x154BD8u;
    // 0x154bd8: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x154bdc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x154be0: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x154be4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x154be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x154be8: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x154be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    // 0x154bec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154bf0: 0x50650019  beql        $v1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x154BF0u;
    {
        const bool branch_taken_0x154bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x154bf0) {
            ctx->pc = 0x154BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154BF0u;
            // 0x154bf4: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154C58u;
            return;
        }
    }
    ctx->pc = 0x154BF8u;
    // 0x154bf8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154BF8u;
    SET_GPR_U32(ctx, 31, 0x154C00u);
    ctx->pc = 0x154BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BF8u;
    // 0x154bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154BF8u, 0x154C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C00u;
label_154c00:
    // 0x154c00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x154C00u;
    {
        const bool branch_taken_0x154c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C00u;
        // 0x154c04: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c00) {
            ctx->pc = 0x154C5Cu;
            return;
        }
    }
    ctx->pc = 0x154C08u;
}
