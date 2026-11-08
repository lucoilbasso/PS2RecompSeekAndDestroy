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

// Function: entry_001c4a2c
// Address: 0x1c4a2c - 0x1c4a58
void entry_001c4a2c_0x1c4a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4a2c_0x1c4a2c");
#endif

    ctx->pc = 0x1c4a2cu;

    // 0x1c4a2c: 0x34028170  ori         $v0, $zero, 0x8170
    ctx->pc = 0x1c4a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33136);
    // 0x1c4a30: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C4A30u;
    {
        const bool branch_taken_0x1c4a30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A30u;
        // 0x1c4a34: 0x34028130  ori         $v0, $zero, 0x8130 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a30) {
            ctx->pc = 0x1C4A5Cu;
            return;
        }
    }
    ctx->pc = 0x1C4A38u;
    // 0x1c4a38: 0x2603dc80  addiu       $v1, $s0, -0x2380
    ctx->pc = 0x1c4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
    // 0x1c4a3c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1c4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1c4a40: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1c4a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c4a44: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1c4a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1c4a48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c4a4c: 0x8c92ddd8  lw          $s2, -0x2228($a0)
    ctx->pc = 0x1c4a4cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x24DDD8u));
    // 0x1c4a50: 0xac82ddd8  sw          $v0, -0x2228($a0)
    ctx->pc = 0x1c4a50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24DDD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDD8u, _value); } while (0);
    // 0x1c4a54: 0xaca6dde4  sw          $a2, -0x221C($a1)
    ctx->pc = 0x1c4a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x24DDE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDE4u, _value); } while (0);
    ctx->pc = 0x1c4a58u;
}
