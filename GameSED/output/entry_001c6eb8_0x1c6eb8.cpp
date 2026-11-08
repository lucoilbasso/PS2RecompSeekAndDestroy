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

// Function: entry_001c6eb8
// Address: 0x1c6eb8 - 0x1c6ef0
void entry_001c6eb8_0x1c6eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6eb8_0x1c6eb8");
#endif

    ctx->pc = 0x1c6eb8u;

    // 0x1c6eb8: 0x3411ff48  ori         $s1, $zero, 0xFF48
    ctx->pc = 0x1c6eb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65352);
    // 0x1c6ebc: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x1c6ebcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x1c6ec0: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1c6ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c6ec4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6EC4u;
    {
        const bool branch_taken_0x1c6ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EC4u;
        // 0x1c6ec8: 0x3c02ffe0  lui         $v0, 0xFFE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ec4) {
            ctx->pc = 0x1C6EF0u;
            return;
        }
    }
    ctx->pc = 0x1C6ECCu;
    // 0x1c6ecc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6ed0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c6ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c6ed4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1c6ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1c6ed8: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x1c6ed8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x1c6edc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c6edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c6ee0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6ee4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c6ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c6ee8: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1c6ee8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1c6eec: 0x2638824  and         $s1, $s3, $v1
    ctx->pc = 0x1c6eecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    ctx->pc = 0x1c6ef0u;
}
