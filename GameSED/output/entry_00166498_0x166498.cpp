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

// Function: entry_00166498
// Address: 0x166498 - 0x1664c8
void entry_00166498_0x166498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166498_0x166498");
#endif

    ctx->pc = 0x166498u;

    // 0x166498: 0x14800041  bnez        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x166498u;
    {
        const bool branch_taken_0x166498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166498u;
        // 0x16649c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166498) {
            ctx->pc = 0x1665A0u;
            return;
        }
    }
    ctx->pc = 0x1664A0u;
    // 0x1664a0: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x1664a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x1664a4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1664a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1664A8u;
    {
        const bool branch_taken_0x1664a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1664ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664A8u;
        // 0x1664ac: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664a8) {
            ctx->pc = 0x166514u;
            return;
        }
    }
    ctx->pc = 0x1664B0u;
    // 0x1664b0: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1664B0u;
    {
        const bool branch_taken_0x1664b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1664B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664B0u;
        // 0x1664b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664b0) {
            ctx->pc = 0x166514u;
            return;
        }
    }
    ctx->pc = 0x1664B8u;
    // 0x1664b8: 0xc7958380  lwc1        $f21, -0x7C80($gp)
    ctx->pc = 0x1664b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1664bc: 0x265111e4  addiu       $s1, $s2, 0x11E4
    ctx->pc = 0x1664bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4580));
    // 0x1664c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1664c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1664c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1664c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1664c8u;
}
