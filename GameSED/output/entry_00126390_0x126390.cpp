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

// Function: entry_00126390
// Address: 0x126390 - 0x1263b8
void entry_00126390_0x126390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126390_0x126390");
#endif

    ctx->pc = 0x126390u;

    // 0x126390: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x126390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x126394: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x126398: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x126398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12639c: 0xc79680f8  lwc1        $f22, -0x7F08($gp)
    ctx->pc = 0x12639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1263a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1263a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263a4: 0x24140046  addiu       $s4, $zero, 0x46
    ctx->pc = 0x1263a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1263a8: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x1263a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1263ac: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1263acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1263b0: 0x254001a  div         $zero, $s2, $s4
    ctx->pc = 0x1263b0u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1263b4: 0x0  nop
    ctx->pc = 0x1263b4u;
    // NOP
    ctx->pc = 0x1263b8u;
}
