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

// Function: entry_001c0748
// Address: 0x1c0748 - 0x1c0780
void entry_001c0748_0x1c0748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0748_0x1c0748");
#endif

    ctx->pc = 0x1c0748u;

    // 0x1c0748: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c0748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c074c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c074cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0750: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c0750u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0754: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c0754u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c0758: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c0758u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c075c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c075cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0760: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1c0760u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1c0764: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1c0764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1c0768: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1c0768u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1c076c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1c076cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0770: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1c0770u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0774: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1c0774u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c0778: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C0778u;
    {
        const bool branch_taken_0x1c0778 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0778u;
        // 0x1c077c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0778) {
            ctx->pc = 0x1C07ECu;
            return;
        }
    }
    ctx->pc = 0x1C0780u;
}
