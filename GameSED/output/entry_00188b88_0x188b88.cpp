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

// Function: entry_00188b88
// Address: 0x188b88 - 0x188c20
void entry_00188b88_0x188b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b88_0x188b88");
#endif

    ctx->pc = 0x188b88u;

label_188b88:
    // 0x188b88: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x188b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x188b8c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x188b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188b90: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188b90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188b94: 0x24a400d0  addiu       $a0, $a1, 0xD0
    ctx->pc = 0x188b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x188b98: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x188b98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188b9c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x188b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x188ba0: 0x4e1fff9  bgez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x188BA0u;
    {
        const bool branch_taken_0x188ba0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x188BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BA0u;
        // 0x188ba4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ba0) {
            ctx->pc = 0x188B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188b88;
        }
    }
    ctx->pc = 0x188BA8u;
    // 0x188ba8: 0x25220090  addiu       $v0, $t1, 0x90
    ctx->pc = 0x188ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x188bac: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x188bacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188bb0: 0x8cc401bc  lw          $a0, 0x1BC($a2)
    ctx->pc = 0x188bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 444)));
    // 0x188bb4: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x188bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x188bb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188bbc: 0x246301e0  addiu       $v1, $v1, 0x1E0
    ctx->pc = 0x188bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x188bc0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x188bc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188bc4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x188bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x188bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188bcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x188bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188bd0: 0x8cd201c4  lw          $s2, 0x1C4($a2)
    ctx->pc = 0x188bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 452)));
    // 0x188bd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188bd8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x188bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x188bdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x188bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x188be0: 0x8e520134  lw          $s2, 0x134($s2)
    ctx->pc = 0x188be0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x188be4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x188be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x188be8: 0xafc00220  sw          $zero, 0x220($fp)
    ctx->pc = 0x188be8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 544), GPR_U32(ctx, 0));
    // 0x188bec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x188becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x188bf0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x188bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x188bf4: 0x124000a5  beqz        $s2, . + 4 + (0xA5 << 2)
    ctx->pc = 0x188BF4u;
    {
        const bool branch_taken_0x188bf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BF4u;
        // 0x188bf8: 0xafc00224  sw          $zero, 0x224($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bf4) {
            ctx->pc = 0x188E8Cu;
            return;
        }
    }
    ctx->pc = 0x188BFCu;
    // 0x188bfc: 0x26620090  addiu       $v0, $s3, 0x90
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x188c00: 0x27c30220  addiu       $v1, $fp, 0x220
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 544));
    // 0x188c04: 0x27c40210  addiu       $a0, $fp, 0x210
    ctx->pc = 0x188c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 528));
    // 0x188c08: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x188c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x188c0c: 0xafb3001c  sw          $s3, 0x1C($sp)
    ctx->pc = 0x188c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 19));
    // 0x188c10: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x188c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x188c14: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x188c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x188c18: 0xafb10028  sw          $s1, 0x28($sp)
    ctx->pc = 0x188c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    // 0x188c1c: 0x26540020  addiu       $s4, $s2, 0x20
    ctx->pc = 0x188c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->pc = 0x188c20u;
}
