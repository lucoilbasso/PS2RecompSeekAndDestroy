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

// Function: entry_001c3f40
// Address: 0x1c3f40 - 0x1c3f88
void entry_001c3f40_0x1c3f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3f40_0x1c3f40");
#endif

    switch (ctx->pc) {
        case 0x1c3f48u: goto label_1c3f48;
        default: break;
    }

    ctx->pc = 0x1c3f40u;

    // 0x1c3f40: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C3F40u;
    SET_GPR_U32(ctx, 31, 0x1C3F48u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C3F40u, 0x1C3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F48u;
label_1c3f48:
    // 0x1c3f48: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c3f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c3f4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3f50: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1c3f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1c3f54: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c3f54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3f58: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x1c3f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x1c3f5c: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x1c3f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x1c3f60: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1c3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1c3f64: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3f68: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x1c3f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x1c3f6c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x1c3f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1c3f70: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3f74: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1c3f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1c3f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3F78u;
    {
        const bool branch_taken_0x1c3f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F78u;
        // 0x1c3f7c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f78) {
            ctx->pc = 0x1C3F88u;
            return;
        }
    }
    ctx->pc = 0x1C3F80u;
    // 0x1c3f80: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C3F80u;
    SET_GPR_U32(ctx, 31, 0x1C3F88u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C3F80u, 0x1C3F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F88u;
}
