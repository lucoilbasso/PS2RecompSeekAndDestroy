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

// Function: entry_00117f50
// Address: 0x117f50 - 0x117f98
void entry_00117f50_0x117f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117f50_0x117f50");
#endif

    ctx->pc = 0x117f50u;

label_117f50:
    // 0x117f50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x117f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x117f54: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x117f54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x117f58: 0x0  nop
    ctx->pc = 0x117f58u;
    // NOP
    // 0x117f5c: 0x0  nop
    ctx->pc = 0x117f5cu;
    // NOP
    // 0x117f60: 0x0  nop
    ctx->pc = 0x117f60u;
    // NOP
    // 0x117f64: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117F64u;
    {
        const bool branch_taken_0x117f64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x117F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F64u;
        // 0x117f68: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f64) {
            ctx->pc = 0x117F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117f50;
        }
    }
    ctx->pc = 0x117F6Cu;
    // 0x117f6c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117f70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117f74: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x117f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x117f78: 0x2404006d  addiu       $a0, $zero, 0x6D
    ctx->pc = 0x117f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x117f7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x117f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EC180u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC180u, _value); } while (0);
    // 0x117f80: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x117f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EC18Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC18Cu, _value); } while (0);
    // 0x117f84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x117f84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EC188u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC188u, _value); } while (0);
    // 0x117f88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x117f88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EC184u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC184u, _value); } while (0);
    // 0x117f8c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x117f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EC190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC190u, _value); } while (0);
    // 0x117f90: 0x244301c8  addiu       $v1, $v0, 0x1C8
    ctx->pc = 0x117f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x117f94: 0x0  nop
    ctx->pc = 0x117f94u;
    // NOP
    ctx->pc = 0x117f98u;
}
