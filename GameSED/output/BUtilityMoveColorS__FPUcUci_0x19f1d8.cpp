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

// Function: BUtilityMoveColorS__FPUcUci
// Address: 0x19f1d8 - 0x19f268
void BUtilityMoveColorS__FPUcUci_0x19f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMoveColorS__FPUcUci_0x19f1d8");
#endif

    ctx->pc = 0x19f1d8u;

    // 0x19f1d8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19f1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1dc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x19f1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19f1e0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x19f1e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f1e4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x19f1e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1e8: 0x43202b  sltu        $a0, $v0, $v1
    ctx->pc = 0x19f1e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19f1ec: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x19f1ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f1f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19F1F0u;
    {
        const bool branch_taken_0x19f1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1f0) {
            ctx->pc = 0x19F228u;
            goto label_19f228;
        }
    }
    ctx->pc = 0x19F1F8u;
    // 0x19f1f8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19f1f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f1fc: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x19f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19f200: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19f200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19f204: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19f204u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19f208: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19f208u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19f20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f210: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19f210u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19f214: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19f214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19f218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f21c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f220: 0x3e00008  jr          $ra
    ctx->pc = 0x19F220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F220u;
        // 0x19f224: 0xa0e40000  sb          $a0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F228u;
label_19f228:
    // 0x19f228: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x19F228u;
    {
        const bool branch_taken_0x19f228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f228) {
            ctx->pc = 0x19F260u;
            goto label_19f260;
        }
    }
    ctx->pc = 0x19F230u;
    // 0x19f230: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19f230u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f234: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19f234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f238: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19f238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19f23c: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19f23cu;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19f240: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19f240u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19f244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f248: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19f248u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19f24c: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19f250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f254: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19f254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f258: 0x3e00008  jr          $ra
    ctx->pc = 0x19F258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F258u;
        // 0x19f25c: 0xa0e40000  sb          $a0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F260u;
label_19f260:
    // 0x19f260: 0x3e00008  jr          $ra
    ctx->pc = 0x19F260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F260u;
        // 0x19f264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F268u;
}
