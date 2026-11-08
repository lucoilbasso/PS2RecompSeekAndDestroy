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

// Function: entry_0011f24c
// Address: 0x11f24c - 0x11f2ac
void entry_0011f24c_0x11f24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f24c_0x11f24c");
#endif

    ctx->pc = 0x11f24cu;

    // 0x11f24c: 0x2e62000a  sltiu       $v0, $s3, 0xA
    ctx->pc = 0x11f24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11f250: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F250u;
    {
        const bool branch_taken_0x11f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f250) {
            ctx->pc = 0x11F254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F250u;
            // 0x11f254: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F2ACu;
            return;
        }
    }
    ctx->pc = 0x11F258u;
    // 0x11f258: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11f25c: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x11f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x11f260: 0x24427b80  addiu       $v0, $v0, 0x7B80
    ctx->pc = 0x11f260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31616));
    // 0x11f264: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x11f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x11f268: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x11f268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11f26c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x11f26cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f270: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x11f270u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x11f274: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11f278: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x11f278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x11f27c: 0x24427c20  addiu       $v0, $v0, 0x7C20
    ctx->pc = 0x11f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31776));
    // 0x11f280: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x11f280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11f284: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11f284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f288: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x11f288u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x11f28c: 0xde3021  addu        $a2, $a2, $fp
    ctx->pc = 0x11f28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x11f290: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x11f290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x11f294: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11f294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f298: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x11f298u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x11f29c: 0x8f8489c8  lw          $a0, -0x7638($gp)
    ctx->pc = 0x11f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x11f2a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11f2a4: 0xaf8489c8  sw          $a0, -0x7638($gp)
    ctx->pc = 0x11f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937032), GPR_U32(ctx, 4));
    // 0x11f2a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11f2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x11f2acu;
}
