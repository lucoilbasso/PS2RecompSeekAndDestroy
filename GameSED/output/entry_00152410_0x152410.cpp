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

// Function: entry_00152410
// Address: 0x152410 - 0x152490
void entry_00152410_0x152410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152410_0x152410");
#endif

    ctx->pc = 0x152410u;

label_152410:
    // 0x152410: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x152410u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152414: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x152414u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x152418: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x152418u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15241c: 0xdc490018  ld          $t1, 0x18($v0)
    ctx->pc = 0x15241cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x152420: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x152420u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x152424: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x152424u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x152428: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x152428u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x15242c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x15242cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x152430: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x152430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x152434: 0x0  nop
    ctx->pc = 0x152434u;
    // NOP
    // 0x152438: 0x0  nop
    ctx->pc = 0x152438u;
    // NOP
    // 0x15243c: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15243Cu;
    {
        const bool branch_taken_0x15243c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x152440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15243Cu;
        // 0x152440: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15243c) {
            ctx->pc = 0x152410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152410;
        }
    }
    ctx->pc = 0x152444u;
    // 0x152444: 0x8cf006a4  lw          $s0, 0x6A4($a3)
    ctx->pc = 0x152444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1700)));
    // 0x152448: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x152448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15244c: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x15244cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x152450: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x152450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x152454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152458: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x152458u;
    {
        const bool branch_taken_0x152458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152458) {
            ctx->pc = 0x15245Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152458u;
            // 0x15245c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152574u;
            return;
        }
    }
    ctx->pc = 0x152460u;
    // 0x152460: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x152460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152468: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x152468u;
    {
        const bool branch_taken_0x152468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152468) {
            ctx->pc = 0x15246Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152468u;
            // 0x15246c: 0x26030160  addiu       $v1, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1524C0u;
            return;
        }
    }
    ctx->pc = 0x152470u;
    // 0x152470: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x152470u;
    {
        const bool branch_taken_0x152470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152470) {
            ctx->pc = 0x152474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152470u;
            // 0x152474: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152490u;
            return;
        }
    }
    ctx->pc = 0x152478u;
    // 0x152478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x152478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15247c: 0x50620028  beql        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x15247Cu;
    {
        const bool branch_taken_0x15247c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15247c) {
            ctx->pc = 0x152480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15247Cu;
            // 0x152480: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152520u;
            return;
        }
    }
    ctx->pc = 0x152484u;
    // 0x152484: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x152484u;
    {
        const bool branch_taken_0x152484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152484u;
        // 0x152488: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152484) {
            ctx->pc = 0x152560u;
            return;
        }
    }
    ctx->pc = 0x15248Cu;
    // 0x15248c: 0x0  nop
    ctx->pc = 0x15248cu;
    // NOP
    ctx->pc = 0x152490u;
}
