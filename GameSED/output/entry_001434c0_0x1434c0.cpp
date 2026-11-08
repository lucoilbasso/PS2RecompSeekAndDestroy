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

// Function: entry_001434c0
// Address: 0x1434c0 - 0x143518
void entry_001434c0_0x1434c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001434c0_0x1434c0");
#endif

    ctx->pc = 0x1434c0u;

label_1434c0:
    // 0x1434c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1434c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1434c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1434c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1434c8: 0x0  nop
    ctx->pc = 0x1434c8u;
    // NOP
    // 0x1434cc: 0x0  nop
    ctx->pc = 0x1434ccu;
    // NOP
    // 0x1434d0: 0x0  nop
    ctx->pc = 0x1434d0u;
    // NOP
    // 0x1434d4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1434D4u;
    {
        const bool branch_taken_0x1434d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1434D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434D4u;
        // 0x1434d8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434d4) {
            ctx->pc = 0x1434C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1434c0;
        }
    }
    ctx->pc = 0x1434DCu;
    // 0x1434dc: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1434dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1434e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1434e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1434e4: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x1434e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x1434e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1434e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1434ec: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1434ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1434f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1434f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1434f4: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1434f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1434f8: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x1434f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1434fc: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x1434fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x143500: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x143500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x143504: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x143504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x143508: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x143508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x14350c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x14350cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x143510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143514: 0x0  nop
    ctx->pc = 0x143514u;
    // NOP
    ctx->pc = 0x143518u;
}
