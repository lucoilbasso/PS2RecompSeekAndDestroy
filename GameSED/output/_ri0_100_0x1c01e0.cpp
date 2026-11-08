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

// Function: _ri0_100
// Address: 0x1c01e0 - 0x1c028c
void _ri0_100_0x1c01e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_100_0x1c01e0");
#endif

    switch (ctx->pc) {
        case 0x1c0200u: goto label_1c0200;
        case 0x1c0208u: goto label_1c0208;
        default: break;
    }

    ctx->pc = 0x1c01e0u;

    // 0x1c01e0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c01e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c01e4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c01e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c01e8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c01e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c01ec: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1c01ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c01f0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1c01f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c01f4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1c01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c01f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c01fc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c01fcu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1c0200:
    // 0x1c0200: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c0200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c0204: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1c0204u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c0208:
    // 0x1c0208: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c0208u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c020c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c020cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0210: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c0210u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c0214: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c0214u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0218: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1c0218u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1c021c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1c021cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1c0220: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c0220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c0224: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1c0224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c0228: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1c0228u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c022c: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1c022cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c0230: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1c0230u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c0234: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1c0234u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1c0238: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1c0238u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1c023c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1c023cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c0240: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1c0240u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1c0244: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C0244u;
    {
        const bool branch_taken_0x1c0244 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1C0248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0244u;
        // 0x1c0248: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0244) {
            ctx->pc = 0x1C0208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0208;
        }
    }
    ctx->pc = 0x1C024Cu;
    // 0x1c024c: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1c024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1c0250: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1c0250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1c0254: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c0254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c0258: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1c0258u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1c025c: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C025Cu;
    {
        const bool branch_taken_0x1c025c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C025Cu;
        // 0x1c0260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c025c) {
            ctx->pc = 0x1C0208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0208;
        }
    }
    ctx->pc = 0x1C0264u;
    // 0x1c0264: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c0264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c0268: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c0268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c026c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c026cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0270: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1c0270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1c0274: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1c0274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1c0278: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1c0278u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1c027c: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1C027Cu;
    {
        const bool branch_taken_0x1c027c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C027Cu;
        // 0x1c0280: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c027c) {
            ctx->pc = 0x1C0200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0200;
        }
    }
    ctx->pc = 0x1C0284u;
    // 0x1c0284: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C028Cu;
}
