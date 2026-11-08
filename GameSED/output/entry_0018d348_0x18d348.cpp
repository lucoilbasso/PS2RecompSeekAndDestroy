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

// Function: entry_0018d348
// Address: 0x18d348 - 0x18d390
void entry_0018d348_0x18d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d348_0x18d348");
#endif

    ctx->pc = 0x18d348u;

    // 0x18d348: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x18d348u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d34c: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x18d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18d350: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x18d350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18d354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d358: 0x26b20002  addiu       $s2, $s5, 0x2
    ctx->pc = 0x18d358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x18d35c: 0x14a300cc  bne         $a1, $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x18D35Cu;
    {
        const bool branch_taken_0x18d35c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D35Cu;
        // 0x18d360: 0xa6c40000  sh          $a0, 0x0($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d35c) {
            ctx->pc = 0x18D690u;
            return;
        }
    }
    ctx->pc = 0x18D364u;
    // 0x18d364: 0x8622023c  lh          $v0, 0x23C($s1)
    ctx->pc = 0x18d364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x18d368: 0x504000ca  beql        $v0, $zero, . + 4 + (0xCA << 2)
    ctx->pc = 0x18D368u;
    {
        const bool branch_taken_0x18d368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d368) {
            ctx->pc = 0x18D36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D368u;
            // 0x18d36c: 0x96220244  lhu         $v0, 0x244($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D694u;
            return;
        }
    }
    ctx->pc = 0x18D370u;
    // 0x18d370: 0xc62101b0  lwc1        $f1, 0x1B0($s1)
    ctx->pc = 0x18d370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d374: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18d374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18d378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d37c: 0x86220246  lh          $v0, 0x246($s1)
    ctx->pc = 0x18d37cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x18d380: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x18d380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x18d384: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x18D384u;
    {
        const bool branch_taken_0x18d384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D384u;
        // 0x18d388: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d384) {
            ctx->pc = 0x18D67Cu;
            return;
        }
    }
    ctx->pc = 0x18D38Cu;
    // 0x18d38c: 0x0  nop
    ctx->pc = 0x18d38cu;
    // NOP
    ctx->pc = 0x18d390u;
}
