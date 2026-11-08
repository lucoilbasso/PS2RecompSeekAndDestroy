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

// Function: entry_001bca28
// Address: 0x1bca28 - 0x1bca5c
void entry_001bca28_0x1bca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bca28_0x1bca28");
#endif

    ctx->pc = 0x1bca28u;

    // 0x1bca28: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1bca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bca2c: 0x3404bdff  ori         $a0, $zero, 0xBDFF
    ctx->pc = 0x1bca2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48639);
    // 0x1bca30: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1bca30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1bca34: 0x600013  mtlo        $v1
    ctx->pc = 0x1bca34u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1bca38: 0x72621000  madd        $v0, $s3, $v0
    ctx->pc = 0x1bca38u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bca3c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1bca3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bca40: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCA40u;
    {
        const bool branch_taken_0x1bca40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bca40) {
            ctx->pc = 0x1BCA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCA40u;
            // 0x1bca44: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCA5Cu;
            return;
        }
    }
    ctx->pc = 0x1BCA48u;
    // 0x1bca48: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1bca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1bca4c: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1bca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x1bca50: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bca54: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1bca54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1bca58: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->pc = 0x1bca5cu;
}
