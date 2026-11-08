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

// Function: TankLoadInfoInit__9ApcObjRsci
// Address: 0x1d7300 - 0x1d738c
void TankLoadInfoInit__9ApcObjRsci_0x1d7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankLoadInfoInit__9ApcObjRsci_0x1d7300");
#endif

    switch (ctx->pc) {
        case 0x1d732cu: goto label_1d732c;
        case 0x1d7348u: goto label_1d7348;
        case 0x1d7358u: goto label_1d7358;
        default: break;
    }

    ctx->pc = 0x1d7300u;

    // 0x1d7300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d730c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7310: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7314: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x1d7314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x1d7318: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7318u;
    {
        const bool branch_taken_0x1d7318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7318u;
        // 0x1d731c: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7318) {
            ctx->pc = 0x1D7324u;
            goto label_1d7324;
        }
    }
    ctx->pc = 0x1D7320u;
    // 0x1d7320: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d7320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d7324:
    // 0x1d7324: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D7324u;
    SET_GPR_U32(ctx, 31, 0x1D732Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D7324u, 0x1D732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D732Cu;
label_1d732c:
    // 0x1d732c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D732Cu;
    {
        const bool branch_taken_0x1d732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D732Cu;
        // 0x1d7330: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d732c) {
            ctx->pc = 0x1D7348u;
            goto label_1d7348;
        }
    }
    ctx->pc = 0x1D7334u;
    // 0x1d7334: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d733c: 0x24a51b70  addiu       $a1, $a1, 0x1B70
    ctx->pc = 0x1d733cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7024));
    // 0x1d7340: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D7340u;
    SET_GPR_U32(ctx, 31, 0x1D7348u);
    ctx->pc = 0x1D7344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7340u;
    // 0x1d7344: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D7340u, 0x1D7348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7348u;
label_1d7348:
    // 0x1d7348: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d734c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D734Cu;
    {
        const bool branch_taken_0x1d734c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D734Cu;
        // 0x1d7350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d734c) {
            ctx->pc = 0x1D737Cu;
            goto label_1d737c;
        }
    }
    ctx->pc = 0x1D7354u;
    // 0x1d7354: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1d7354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1d7358:
    // 0x1d7358: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d7358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d735c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d7360: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d7360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d7364: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1d7364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d7368: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1d7368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1d736c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d736cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7370: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d7370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d7374: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D7374u;
    {
        const bool branch_taken_0x1d7374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7374u;
        // 0x1d7378: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7374) {
            ctx->pc = 0x1D7358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7358;
        }
    }
    ctx->pc = 0x1D737Cu;
label_1d737c:
    // 0x1d737c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d737cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7384: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7384u;
        // 0x1d7388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D738Cu;
}
