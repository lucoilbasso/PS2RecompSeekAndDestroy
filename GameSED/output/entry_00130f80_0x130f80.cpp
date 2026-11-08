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

// Function: entry_00130f80
// Address: 0x130f80 - 0x130fac
void entry_00130f80_0x130f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f80_0x130f80");
#endif

    ctx->pc = 0x130f80u;

    // 0x130f80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130f84: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x130f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x130f88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x130f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130f8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x130f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x130f90: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x130f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x130f94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x130f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x130f98: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x130f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x130f9c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x130f9cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x130fa0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x130fa0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x130fa4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x130fa4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x130fa8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x130fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x130facu;
}
