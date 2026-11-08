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

// Function: entry_00139710
// Address: 0x139710 - 0x139750
void entry_00139710_0x139710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139710_0x139710");
#endif

    ctx->pc = 0x139710u;

    // 0x139710: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x139710u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139714: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x139714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x139718: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13971c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13971cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139720: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x139720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x139724: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x139724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x139728: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x139728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13972c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13972cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x139730: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x139730u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x139734: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x139734u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x139738: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x139738u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13973c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x13973cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x139740: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x139740u;
    {
        const bool branch_taken_0x139740 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x139744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139740u;
        // 0x139744: 0x24e30020  addiu       $v1, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139740) {
            ctx->pc = 0x139750u;
            return;
        }
    }
    ctx->pc = 0x139748u;
    // 0x139748: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x139748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13974c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13974cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x139750u;
}
