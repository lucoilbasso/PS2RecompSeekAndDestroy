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

// Function: entry_00134f9c
// Address: 0x134f9c - 0x134fc8
void entry_00134f9c_0x134f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134f9c_0x134f9c");
#endif

    ctx->pc = 0x134f9cu;

    // 0x134f9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134fa0: 0x26020370  addiu       $v0, $s0, 0x370
    ctx->pc = 0x134fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x134fa4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x134fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x134fa8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x134fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x134fac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x134facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x134fb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x134fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x134fb4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x134fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x134fb8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x134fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x134fbc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x134fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x134fc0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x134FC0u;
    {
        const bool branch_taken_0x134fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FC0u;
        // 0x134fc4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fc0) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x134FC8u;
}
