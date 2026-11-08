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

// Function: entry_0011fb48
// Address: 0x11fb48 - 0x11fb70
void entry_0011fb48_0x11fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fb48_0x11fb48");
#endif

    ctx->pc = 0x11fb48u;

    // 0x11fb48: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11FB48u;
    {
        const bool branch_taken_0x11fb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB48u;
        // 0x11fb4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb48) {
            ctx->pc = 0x11FBFCu;
            return;
        }
    }
    ctx->pc = 0x11FB50u;
    // 0x11fb50: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x11fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11fb54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fb58: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11fb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x11fb5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11fb5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb60: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x11fb60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x11fb64: 0x26310790  addiu       $s1, $s1, 0x790
    ctx->pc = 0x11fb64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
    // 0x11fb68: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x11fb68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11fb6c: 0x0  nop
    ctx->pc = 0x11fb6cu;
    // NOP
    ctx->pc = 0x11fb70u;
}
