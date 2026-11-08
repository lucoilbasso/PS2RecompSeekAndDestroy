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

// Function: entry_0018f550
// Address: 0x18f550 - 0x18f580
void entry_0018f550_0x18f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f550_0x18f550");
#endif

    ctx->pc = 0x18f550u;

    // 0x18f550: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x18f550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18f554: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x18f554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18f558: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18f558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f55c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18f560: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18f560u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18f564: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18f564u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18f568: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18f568u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18f56c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18f56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18f570: 0x94e6015a  lhu         $a2, 0x15A($a3)
    ctx->pc = 0x18f570u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 346)));
    // 0x18f574: 0x28c60004  slti        $a2, $a2, 0x4
    ctx->pc = 0x18f574u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18f578: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F578u;
    {
        const bool branch_taken_0x18f578 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f578) {
            ctx->pc = 0x18F594u;
            return;
        }
    }
    ctx->pc = 0x18F580u;
}
