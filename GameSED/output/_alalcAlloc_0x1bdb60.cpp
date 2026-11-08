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

// Function: _alalcAlloc
// Address: 0x1bdb60 - 0x1bdbcc
void _alalcAlloc_0x1bdb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_alalcAlloc_0x1bdb60");
#endif

    switch (ctx->pc) {
        case 0x1bdbbcu: goto label_1bdbbc;
        default: break;
    }

    ctx->pc = 0x1bdb60u;

    // 0x1bdb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bdb64: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1bdb64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdb6c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BDB6Cu;
    {
        const bool branch_taken_0x1bdb6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb6c) {
            ctx->pc = 0x1BDB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDB6Cu;
            // 0x1bdb70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB74u;
            goto label_1bdb74;
        }
    }
    ctx->pc = 0x1BDB74u;
label_1bdb74:
    // 0x1bdb74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1bdb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bdb78: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bdb7c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1bdb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1bdb80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdb84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bdb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bdb88: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x1bdb88u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bdb8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bdb90: 0x1012  mflo        $v0
    ctx->pc = 0x1bdb90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1bdb94: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1bdb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bdb98: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1bdb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bdb9c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1bdb9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bdba0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDBA0u;
    {
        const bool branch_taken_0x1bdba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdba0) {
            ctx->pc = 0x1BDBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDBA0u;
            // 0x1bdba4: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDBB0u;
            goto label_1bdbb0;
        }
    }
    ctx->pc = 0x1BDBA8u;
    // 0x1bdba8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDBA8u;
    {
        const bool branch_taken_0x1bdba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBA8u;
        // 0x1bdbac: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdba8) {
            ctx->pc = 0x1BDBC0u;
            goto label_1bdbc0;
        }
    }
    ctx->pc = 0x1BDBB0u;
label_1bdbb0:
    // 0x1bdbb0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1bdbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbb4: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BDBB4u;
    SET_GPR_U32(ctx, 31, 0x1BDBBCu);
    ctx->pc = 0x1BDBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBB4u;
    // 0x1bdbb8: 0x24a5b288  addiu       $a1, $a1, -0x4D78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BDBB4u, 0x1BDBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBBCu;
label_1bdbbc:
    // 0x1bdbbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bdbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdbc0:
    // 0x1bdbc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBC4u;
        // 0x1bdbc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDBCCu;
}
