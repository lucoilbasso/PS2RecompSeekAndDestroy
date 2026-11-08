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

// Function: entry_00166370
// Address: 0x166370 - 0x1663b0
void entry_00166370_0x166370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166370_0x166370");
#endif

    ctx->pc = 0x166370u;

    // 0x166370: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x166370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x166374: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x166374u;
    {
        const bool branch_taken_0x166374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166374) {
            ctx->pc = 0x166378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166374u;
            // 0x166378: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16648Cu;
            return;
        }
    }
    ctx->pc = 0x16637Cu;
    // 0x16637c: 0x10800088  beqz        $a0, . + 4 + (0x88 << 2)
    ctx->pc = 0x16637Cu;
    {
        const bool branch_taken_0x16637c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16637Cu;
        // 0x166380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16637c) {
            ctx->pc = 0x1665A0u;
            return;
        }
    }
    ctx->pc = 0x166384u;
    // 0x166384: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x166384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x166388: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x166388u;
    {
        const bool branch_taken_0x166388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166388u;
        // 0x16638c: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166388) {
            ctx->pc = 0x1663FCu;
            return;
        }
    }
    ctx->pc = 0x166390u;
    // 0x166390: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x166390u;
    {
        const bool branch_taken_0x166390 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166390u;
        // 0x166394: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166390) {
            ctx->pc = 0x1663FCu;
            return;
        }
    }
    ctx->pc = 0x166398u;
    // 0x166398: 0xc795837c  lwc1        $f21, -0x7C84($gp)
    ctx->pc = 0x166398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16639c: 0x3c160021  lui         $s6, 0x21
    ctx->pc = 0x16639cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)33 << 16));
    // 0x1663a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1663a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1663a4: 0x265111e4  addiu       $s1, $s2, 0x11E4
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4580));
    // 0x1663a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1663a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1663ac: 0x0  nop
    ctx->pc = 0x1663acu;
    // NOP
    ctx->pc = 0x1663b0u;
}
