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

// Function: entry_0012a438
// Address: 0x12a438 - 0x12a478
void entry_0012a438_0x12a438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a438_0x12a438");
#endif

    ctx->pc = 0x12a438u;

    // 0x12a438: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x12a438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x12a43c: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x12a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x12a440: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12a440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12a444: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x12a444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x12a448: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12a44c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x12a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x12a450: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x12a450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x12a454: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x12a454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x12a458: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x12a458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x12a45c: 0x706418e8  pminw       $v1, $v1, $a0
    ctx->pc = 0x12a45cu;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x12a460: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x12a460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x12a464: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A464u;
    {
        const bool branch_taken_0x12a464 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A464u;
        // 0x12a468: 0x93a20083  lbu         $v0, 0x83($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a464) {
            ctx->pc = 0x12A478u;
            return;
        }
    }
    ctx->pc = 0x12A46Cu;
    // 0x12a46c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x12a46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12a470: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x12a470u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x12a474: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x12a474u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12a478u;
}
