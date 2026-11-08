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

// Function: entry_001811a8
// Address: 0x1811a8 - 0x1811f8
void entry_001811a8_0x1811a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001811a8_0x1811a8");
#endif

    ctx->pc = 0x1811a8u;

    // 0x1811a8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1811A8u;
    {
        const bool branch_taken_0x1811a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811A8u;
        // 0x1811ac: 0xc7a20018  lwc1        $f2, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811a8) {
            ctx->pc = 0x1811F8u;
            return;
        }
    }
    ctx->pc = 0x1811B0u;
    // 0x1811b0: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1811B0u;
    {
        const bool branch_taken_0x1811b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1811B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811B0u;
        // 0x1811b4: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811b0) {
            ctx->pc = 0x1811FCu;
            return;
        }
    }
    ctx->pc = 0x1811B8u;
    // 0x1811b8: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x1811b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1811bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1811c0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1811c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1811c4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1811c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1811c8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1811c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1811cc: 0xade4001c  sw          $a0, 0x1C($t7)
    ctx->pc = 0x1811ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 4));
    // 0x1811d0: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x1811d0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x1811d4: 0xade30020  sw          $v1, 0x20($t7)
    ctx->pc = 0x1811d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 3));
    // 0x1811d8: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x1811d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x1811dc: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x1811dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x1811e0: 0xe5e2000c  swc1        $f2, 0xC($t7)
    ctx->pc = 0x1811e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x1811e4: 0xade50010  sw          $a1, 0x10($t7)
    ctx->pc = 0x1811e4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 5));
    // 0x1811e8: 0xade60014  sw          $a2, 0x14($t7)
    ctx->pc = 0x1811e8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 6));
    // 0x1811ec: 0xadea0018  sw          $t2, 0x18($t7)
    ctx->pc = 0x1811ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 10));
    // 0x1811f0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1811F0u;
    {
        const bool branch_taken_0x1811f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811F0u;
        // 0x1811f4: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811f0) {
            ctx->pc = 0x181384u;
            return;
        }
    }
    ctx->pc = 0x1811F8u;
}
