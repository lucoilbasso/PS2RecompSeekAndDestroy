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

// Function: entry_001c0068
// Address: 0x1c0068 - 0x1c00a0
void entry_001c0068_0x1c0068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0068_0x1c0068");
#endif

    ctx->pc = 0x1c0068u;

    // 0x1c0068: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c0068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c006c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c006cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0070: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c0070u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0074: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c0074u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c0078: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c0078u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c007c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c007cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0080: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1c0080u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1c0084: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1c0084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1c0088: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1c0088u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1c008c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1c008cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0090: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1c0090u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0094: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1c0094u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c0098: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C0098u;
    {
        const bool branch_taken_0x1c0098 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0098u;
        // 0x1c009c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0098) {
            ctx->pc = 0x1C00F4u;
            return;
        }
    }
    ctx->pc = 0x1C00A0u;
}
