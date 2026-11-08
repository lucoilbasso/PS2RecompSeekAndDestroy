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

// Function: entry_001347fc
// Address: 0x1347fc - 0x134830
void entry_001347fc_0x1347fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001347fc_0x1347fc");
#endif

    ctx->pc = 0x1347fcu;

    // 0x1347fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1347fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134800: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x134800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x134804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x134804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134808: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x134808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13480c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13480cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134810: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x134810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x134814: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x134814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x134818: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x134818u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13481c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13481cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x134820: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x134820u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x134824: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x134824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x134828: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x134828u;
    {
        const bool branch_taken_0x134828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134828u;
        // 0x13482c: 0x24c60820  addiu       $a2, $a2, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134828) {
            ctx->pc = 0x134890u;
            return;
        }
    }
    ctx->pc = 0x134830u;
}
