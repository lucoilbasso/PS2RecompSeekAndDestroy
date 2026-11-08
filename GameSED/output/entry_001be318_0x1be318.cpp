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

// Function: entry_001be318
// Address: 0x1be318 - 0x1be374
void entry_001be318_0x1be318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be318_0x1be318");
#endif

    ctx->pc = 0x1be318u;

label_1be318:
    // 0x1be318: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x1be318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1be31c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1be31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be320: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x1be320u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x1be324: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1be324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be328: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x1be328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1be32c: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x1be32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x1be330: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x1be330u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1be334: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x1be334u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1be338: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1be338u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1be33c: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x1be33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x1be340: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x1be340u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x1be344: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1be344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1be348: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1be348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1be34c: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x1be34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x1be350: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be354: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1be354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1be358: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1be358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1be35c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1be35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1be360: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x1be360u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x1be364: 0xf  sync
    ctx->pc = 0x1be364u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1be368: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1be368u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1be36c: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1BE36Cu;
    {
        const bool branch_taken_0x1be36c = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1BE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE36Cu;
        // 0x1be370: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be36c) {
            ctx->pc = 0x1BE318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be318;
        }
    }
    ctx->pc = 0x1BE374u;
}
