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

// Function: entry_00193800
// Address: 0x193800 - 0x193824
void entry_00193800_0x193800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193800_0x193800");
#endif

    ctx->pc = 0x193800u;

    // 0x193800: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x193800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x193804: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x193804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x193808: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x193808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19380c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x19380cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x193810: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x193810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x193814: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x193814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x193818: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19381c: 0xfc4b0008  sd          $t3, 0x8($v0)
    ctx->pc = 0x19381cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 11));
    // 0x193820: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x193820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->pc = 0x193824u;
}
