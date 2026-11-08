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

// Function: entry_00138558
// Address: 0x138558 - 0x1385b0
void entry_00138558_0x138558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138558_0x138558");
#endif

    ctx->pc = 0x138558u;

    // 0x138558: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x138558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13855c: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x13855Cu;
    {
        const bool branch_taken_0x13855c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13855c) {
            ctx->pc = 0x138560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13855Cu;
            // 0x138560: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138600u;
            return;
        }
    }
    ctx->pc = 0x138564u;
    // 0x138564: 0x8d420400  lw          $v0, 0x400($t2)
    ctx->pc = 0x138564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1024)));
    // 0x138568: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x138568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13856c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x13856Cu;
    {
        const bool branch_taken_0x13856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13856c) {
            ctx->pc = 0x138570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13856Cu;
            // 0x138570: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138600u;
            return;
        }
    }
    ctx->pc = 0x138574u;
    // 0x138574: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x138574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138578: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x138578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13857c: 0x544d0020  bnel        $v0, $t5, . + 4 + (0x20 << 2)
    ctx->pc = 0x13857Cu;
    {
        const bool branch_taken_0x13857c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x13857c) {
            ctx->pc = 0x138580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13857Cu;
            // 0x138580: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138600u;
            return;
        }
    }
    ctx->pc = 0x138584u;
    // 0x138584: 0x8f838a2c  lw          $v1, -0x75D4($gp)
    ctx->pc = 0x138584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x138588: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x138588u;
    {
        const bool branch_taken_0x138588 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138588u;
        // 0x13858c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138588) {
            ctx->pc = 0x1385D4u;
            return;
        }
    }
    ctx->pc = 0x138590u;
    // 0x138590: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x138590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x138594: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x138594u;
    {
        const bool branch_taken_0x138594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x138598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138594u;
        // 0x138598: 0x8f828a2c  lw          $v0, -0x75D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138594) {
            ctx->pc = 0x1385D8u;
            return;
        }
    }
    ctx->pc = 0x13859Cu;
    // 0x13859c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x13859cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385a0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1385a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385a4: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1385a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1385a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1385ac: 0x0  nop
    ctx->pc = 0x1385acu;
    // NOP
    ctx->pc = 0x1385b0u;
}
