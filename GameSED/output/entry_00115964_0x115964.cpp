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

// Function: entry_00115964
// Address: 0x115964 - 0x1159ac
void entry_00115964_0x115964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115964_0x115964");
#endif

    ctx->pc = 0x115964u;

    // 0x115964: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x115964u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x115968: 0x2ae2000c  slti        $v0, $s7, 0xC
    ctx->pc = 0x115968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x11596c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x11596Cu;
    {
        const bool branch_taken_0x11596c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11596Cu;
        // 0x115970: 0x32f0ffff  andi        $s0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11596c) {
            ctx->pc = 0x115790u;
            return;
        }
    }
    ctx->pc = 0x115974u;
    // 0x115974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11597c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x11597cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x115980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115984: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x115988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11598c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11598cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115990: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x115990u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x115994: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x115994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115998: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x115998u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11599c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x11599cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1159a0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1159a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1159a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1159A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159A4u;
        // 0x1159a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1159ACu;
}
