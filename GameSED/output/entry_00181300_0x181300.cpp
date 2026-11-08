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

// Function: entry_00181300
// Address: 0x181300 - 0x181350
void entry_00181300_0x181300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181300_0x181300");
#endif

    ctx->pc = 0x181300u;

    // 0x181300: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x181300u;
    {
        const bool branch_taken_0x181300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181300) {
            ctx->pc = 0x181304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181300u;
            // 0x181304: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            return;
        }
    }
    ctx->pc = 0x181308u;
    // 0x181308: 0x54e00011  bnel        $a3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x181308u;
    {
        const bool branch_taken_0x181308 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x181308) {
            ctx->pc = 0x18130Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181308u;
            // 0x18130c: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181350u;
            return;
        }
    }
    ctx->pc = 0x181310u;
    // 0x181310: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x181310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x181314: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x181314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181318: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x181318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18131c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x18131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181320: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x181320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181324: 0xade4001c  sw          $a0, 0x1C($t7)
    ctx->pc = 0x181324u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 4));
    // 0x181328: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x181328u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x18132c: 0xade30020  sw          $v1, 0x20($t7)
    ctx->pc = 0x18132cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 3));
    // 0x181330: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x181330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x181334: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x181334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x181338: 0xe5e2000c  swc1        $f2, 0xC($t7)
    ctx->pc = 0x181338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x18133c: 0xade50010  sw          $a1, 0x10($t7)
    ctx->pc = 0x18133cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 5));
    // 0x181340: 0xade60014  sw          $a2, 0x14($t7)
    ctx->pc = 0x181340u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 6));
    // 0x181344: 0xadea0018  sw          $t2, 0x18($t7)
    ctx->pc = 0x181344u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 10));
    // 0x181348: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x181348u;
    {
        const bool branch_taken_0x181348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181348u;
        // 0x18134c: 0xafa30078  sw          $v1, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181348) {
            ctx->pc = 0x181384u;
            return;
        }
    }
    ctx->pc = 0x181350u;
}
