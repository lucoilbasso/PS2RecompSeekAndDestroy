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

// Function: entry_00188328
// Address: 0x188328 - 0x188360
void entry_00188328_0x188328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188328_0x188328");
#endif

    ctx->pc = 0x188328u;

    // 0x188328: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x188328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18832c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x188330: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x188330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x188334: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x188334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x188338: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x188338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x18833c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x18833cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x188340: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x188340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x188344: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x188344u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x188348: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x188348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x18834c: 0x34210030  ori         $at, $at, 0x30
    ctx->pc = 0x18834cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48);
    // 0x188350: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x188350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x188354: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x188354u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x188358: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x188358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18835c: 0xdf828c80  ld          $v0, -0x7380($gp)
    ctx->pc = 0x18835cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    ctx->pc = 0x188360u;
}
