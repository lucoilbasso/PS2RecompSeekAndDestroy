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

// Function: entry_001673fc
// Address: 0x1673fc - 0x167450
void entry_001673fc_0x1673fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001673fc_0x1673fc");
#endif

    ctx->pc = 0x1673fcu;

    // 0x1673fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1673fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x167400: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x167400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x167404: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x167404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x167408: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x167408u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x16740c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x16740cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x167410: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x167410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x167414: 0x8e631264  lw          $v1, 0x1264($s3)
    ctx->pc = 0x167414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4708)));
    // 0x167418: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x167418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16741c: 0x8c6301ac  lw          $v1, 0x1AC($v1)
    ctx->pc = 0x16741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x167420: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x167420u;
    {
        const bool branch_taken_0x167420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167420u;
        // 0x167424: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167420) {
            ctx->pc = 0x167498u;
            return;
        }
    }
    ctx->pc = 0x167428u;
    // 0x167428: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x167428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16742c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167430: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x167430u;
    {
        const bool branch_taken_0x167430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167430) {
            ctx->pc = 0x167434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167430u;
            // 0x167434: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16749Cu;
            return;
        }
    }
    ctx->pc = 0x167438u;
    // 0x167438: 0x26631258  addiu       $v1, $s3, 0x1258
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4696));
    // 0x16743c: 0xae601260  sw          $zero, 0x1260($s3)
    ctx->pc = 0x16743cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4704), GPR_U32(ctx, 0));
    // 0x167440: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167444: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x167444u;
    {
        const bool branch_taken_0x167444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167444u;
        // 0x167448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167444) {
            ctx->pc = 0x167498u;
            return;
        }
    }
    ctx->pc = 0x16744Cu;
    // 0x16744c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x167450u;
}
