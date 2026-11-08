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

// Function: entry_001a2a40
// Address: 0x1a2a40 - 0x1a2a6c
void entry_001a2a40_0x1a2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2a40_0x1a2a40");
#endif

    ctx->pc = 0x1a2a40u;

    // 0x1a2a40: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A2A40u;
    {
        const bool branch_taken_0x1a2a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2a40) {
            ctx->pc = 0x1A2A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2A40u;
            // 0x1a2a44: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2A9Cu;
            return;
        }
    }
    ctx->pc = 0x1A2A48u;
    // 0x1a2a48: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x1a2a48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1a2a4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2a50: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1a2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2a54: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1a2a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1a2a58: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1a2a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a2a5c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a2a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a2a60: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x1a2a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1a2a64: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1a2a64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a2a68: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x1a2a68u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    ctx->pc = 0x1a2a6cu;
}
