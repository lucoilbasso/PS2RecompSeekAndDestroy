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

// Function: entry_0014c1a8
// Address: 0x14c1a8 - 0x14c20c
void entry_0014c1a8_0x14c1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c1a8_0x14c1a8");
#endif

    ctx->pc = 0x14c1a8u;

    // 0x14c1a8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14C1A8u;
    {
        const bool branch_taken_0x14c1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1A8u;
        // 0x14c1ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1a8) {
            ctx->pc = 0x14C20Cu;
            return;
        }
    }
    ctx->pc = 0x14C1B0u;
    // 0x14c1b0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14C1B0u;
    {
        const bool branch_taken_0x14c1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1B0u;
        // 0x14c1b4: 0xae2201f8  sw          $v0, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1b0) {
            ctx->pc = 0x14C20Cu;
            return;
        }
    }
    ctx->pc = 0x14C1B8u;
    // 0x14c1b8: 0x26220200  addiu       $v0, $s1, 0x200
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x14c1bc: 0x26270210  addiu       $a3, $s1, 0x210
    ctx->pc = 0x14c1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x14c1c0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14c1c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14c1c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14c1cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c1d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14c1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14c1d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14c1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14c1d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14c1d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14c1dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14c1dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14c1e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14c1e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14c1e4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14c1e8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14c1e8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14c1ec: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14c1ecu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14c1f0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14c1f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14c1f4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x14c1f8: 0x2626020c  addiu       $a2, $s1, 0x20C
    ctx->pc = 0x14c1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 524));
    // 0x14c1fc: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x14c1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c200: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x14c200u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c204: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14c204u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c208: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x14c208u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x14c20cu;
}
