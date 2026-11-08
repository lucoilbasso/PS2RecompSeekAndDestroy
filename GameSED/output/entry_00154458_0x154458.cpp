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

// Function: entry_00154458
// Address: 0x154458 - 0x154498
void entry_00154458_0x154458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154458_0x154458");
#endif

    ctx->pc = 0x154458u;

    // 0x154458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x154458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15445c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15445cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154460: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x154460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x154464: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x154464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x154468: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x154468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15446c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x154470: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x154470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x154474: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x154474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x154478: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x154478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15447c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x15447cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154480: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154480u;
    {
        const bool branch_taken_0x154480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x154484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154480u;
        // 0x154484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154480) {
            ctx->pc = 0x154498u;
            return;
        }
    }
    ctx->pc = 0x154488u;
    // 0x154488: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x154488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x15448c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x15448cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x154490: 0xc068186  jal         func_1A0618
    ctx->pc = 0x154490u;
    SET_GPR_U32(ctx, 31, 0x154498u);
    ctx->pc = 0x154494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154490u;
    // 0x154494: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x154490u, 0x154498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154498u;
}
