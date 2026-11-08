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

// Function: entry_001319a0
// Address: 0x1319a0 - 0x1319d0
void entry_001319a0_0x1319a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001319a0_0x1319a0");
#endif

    ctx->pc = 0x1319a0u;

    // 0x1319a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1319a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1319a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1319a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1319a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1319a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1319ac: 0xe6140100  swc1        $f20, 0x100($s0)
    ctx->pc = 0x1319acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1319b0: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1319b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1319b4: 0xa61200ea  sh          $s2, 0xEA($s0)
    ctx->pc = 0x1319b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 18));
    // 0x1319b8: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1319b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1319bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1319BCu;
    {
        const bool branch_taken_0x1319bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1319C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319BCu;
        // 0x1319c0: 0xa60000e8  sh          $zero, 0xE8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319bc) {
            ctx->pc = 0x1319D0u;
            return;
        }
    }
    ctx->pc = 0x1319C4u;
    // 0x1319c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1319c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1319c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1319C8u;
    {
        const bool branch_taken_0x1319c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1319CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319C8u;
        // 0x1319cc: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319c8) {
            ctx->pc = 0x1319D4u;
            return;
        }
    }
    ctx->pc = 0x1319D0u;
}
