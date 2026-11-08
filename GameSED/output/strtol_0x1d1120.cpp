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

// Function: strtol
// Address: 0x1d1120 - 0x1d114c
void strtol_0x1d1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strtol_0x1d1120");
#endif

    ctx->pc = 0x1d1120u;

    // 0x1d1120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1124: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1d1124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1d1128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d112c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d112cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1130: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d1130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1134: 0x8c64e1b0  lw          $a0, -0x1E50($v1)
    ctx->pc = 0x1d1134u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1d1138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d113c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d113cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1140: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d1140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1144: 0x80743ba  j           func_1D0EE8
    ctx->pc = 0x1D1144u;
    ctx->pc = 0x1D1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1144u;
    // 0x1d1148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0EE8u;
    _strtol_r_0x1d0ee8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D114Cu;
}
