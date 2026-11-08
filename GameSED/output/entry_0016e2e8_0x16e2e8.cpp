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

// Function: entry_0016e2e8
// Address: 0x16e2e8 - 0x16e340
void entry_0016e2e8_0x16e2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e2e8_0x16e2e8");
#endif

    ctx->pc = 0x16e2e8u;

    // 0x16e2e8: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E2E8u;
    {
        const bool branch_taken_0x16e2e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2E8u;
        // 0x16e2ec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2e8) {
            ctx->pc = 0x16E340u;
            return;
        }
    }
    ctx->pc = 0x16E2F0u;
    // 0x16e2f0: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x16e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x16e2f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e2f8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x16e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x16e2fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e300: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x16e300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x16e304: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x16e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x16e308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e30c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16e310: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x16e310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x16e314: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x16e314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x16e318: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e31c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16e320: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16e324: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E324u;
    {
        const bool branch_taken_0x16e324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e324) {
            ctx->pc = 0x16E328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E324u;
            // 0x16e328: 0xaccc00e0  sw          $t4, 0xE0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E340u;
            return;
        }
    }
    ctx->pc = 0x16E32Cu;
    // 0x16e32c: 0x8cc300e0  lw          $v1, 0xE0($a2)
    ctx->pc = 0x16e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x16e330: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x16e330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16e334: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16E334u;
    {
        const bool branch_taken_0x16e334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E334u;
        // 0x16e338: 0x1a2a00b  movn        $s4, $t5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e334) {
            ctx->pc = 0x16E340u;
            return;
        }
    }
    ctx->pc = 0x16E33Cu;
    // 0x16e33c: 0xacc000e0  sw          $zero, 0xE0($a2)
    ctx->pc = 0x16e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 0));
    ctx->pc = 0x16e340u;
}
