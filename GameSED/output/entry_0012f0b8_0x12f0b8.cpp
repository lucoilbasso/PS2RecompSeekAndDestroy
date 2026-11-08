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

// Function: entry_0012f0b8
// Address: 0x12f0b8 - 0x12f0f4
void entry_0012f0b8_0x12f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f0b8_0x12f0b8");
#endif

    ctx->pc = 0x12f0b8u;

label_12f0b8:
    // 0x12f0b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12f0bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12f0c0: 0x0  nop
    ctx->pc = 0x12f0c0u;
    // NOP
    // 0x12f0c4: 0x0  nop
    ctx->pc = 0x12f0c4u;
    // NOP
    // 0x12f0c8: 0x0  nop
    ctx->pc = 0x12f0c8u;
    // NOP
    // 0x12f0cc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F0CCu;
    {
        const bool branch_taken_0x12f0cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0CCu;
        // 0x12f0d0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0cc) {
            ctx->pc = 0x12F0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f0b8;
        }
    }
    ctx->pc = 0x12F0D4u;
    // 0x12f0d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f0d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f0d8: 0x248200e8  addiu       $v0, $a0, 0xE8
    ctx->pc = 0x12f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x12f0dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f0e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f0e4: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x12f0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x12f0e8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x12f0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f0ec: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x12f0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f0f0: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x12f0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x12f0f4u;
}
