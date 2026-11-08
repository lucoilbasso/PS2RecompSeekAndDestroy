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

// Function: CommandSet__15CD_READ_COMMANDPciiPvT4i
// Address: 0x178c68 - 0x178d08
void CommandSet__15CD_READ_COMMANDPciiPvT4i_0x178c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSet__15CD_READ_COMMANDPciiPvT4i_0x178c68");
#endif

    switch (ctx->pc) {
        case 0x178cd0u: goto label_178cd0;
        default: break;
    }

    ctx->pc = 0x178c68u;

    // 0x178c68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178c6c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x178c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178c7c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x178c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178c84: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x178c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178c8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x178c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x178c94: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x178c94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c98: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x178c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x178c9c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x178c9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ca0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x178ca4: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x178ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x178ca8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x178ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x178cac: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x178cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x178cb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178CB0u;
    {
        const bool branch_taken_0x178cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CB0u;
        // 0x178cb4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cb0) {
            ctx->pc = 0x178CC0u;
            goto label_178cc0;
        }
    }
    ctx->pc = 0x178CB8u;
    // 0x178cb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x178CB8u;
    {
        const bool branch_taken_0x178cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CB8u;
        // 0x178cbc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cb8) {
            ctx->pc = 0x178CC8u;
            goto label_178cc8;
        }
    }
    ctx->pc = 0x178CC0u;
label_178cc0:
    // 0x178cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178cc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x178cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_178cc8:
    // 0x178cc8: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x178CC8u;
    SET_GPR_U32(ctx, 31, 0x178CD0u);
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x178CC8u, 0x178CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CD0u;
label_178cd0:
    // 0x178cd0: 0xae140044  sw          $s4, 0x44($s0)
    ctx->pc = 0x178cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 20));
    // 0x178cd4: 0xae130048  sw          $s3, 0x48($s0)
    ctx->pc = 0x178cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 19));
    // 0x178cd8: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x178cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x178cdc: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x178cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x178ce0: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x178ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x178ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178cec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178cf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178cf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178cf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178cf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178cf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x178cf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178cfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178d00: 0x3e00008  jr          $ra
    ctx->pc = 0x178D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D00u;
        // 0x178d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178D08u;
}
