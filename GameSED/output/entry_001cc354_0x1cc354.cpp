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

// Function: entry_001cc354
// Address: 0x1cc354 - 0x1cc380
void entry_001cc354_0x1cc354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc354_0x1cc354");
#endif

    ctx->pc = 0x1cc354u;

    // 0x1cc354: 0x2294821  addu        $t1, $s1, $t1
    ctx->pc = 0x1cc354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1cc358: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc35c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1cc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1cc360: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc364: 0x21f42  srl         $v1, $v0, 29
    ctx->pc = 0x1cc364u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x1cc368: 0x21782  srl         $v0, $v0, 30
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
    // 0x1cc36c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cc36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cc370: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC370u;
    {
        const bool branch_taken_0x1cc370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC370u;
        // 0x1cc374: 0x2e3280b  movn        $a1, $s7, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc370) {
            ctx->pc = 0x1CC380u;
            return;
        }
    }
    ctx->pc = 0x1CC378u;
    // 0x1cc378: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1cc378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1cc37c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1cc37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    ctx->pc = 0x1cc380u;
}
