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

// Function: setTexRect
// Address: 0x174248 - 0x174300
void setTexRect_0x174248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setTexRect_0x174248");
#endif

    switch (ctx->pc) {
        case 0x174288u: goto label_174288;
        case 0x174298u: goto label_174298;
        case 0x1742acu: goto label_1742ac;
        case 0x1742ccu: goto label_1742cc;
        default: break;
    }

    ctx->pc = 0x174248u;

    // 0x174248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17424c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17424cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174250: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174254: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x174254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174258: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x174258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17425c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17425cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174260: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174264: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x174264u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174268: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x174268u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17426c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17426cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174270: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x174270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x174274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17427c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x17427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x174280: 0xc05d16e  jal         func_1745B8
    ctx->pc = 0x174280u;
    SET_GPR_U32(ctx, 31, 0x174288u);
    ctx->pc = 0x174284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174280u;
    // 0x174284: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1745B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1745B8u, 0x174280u, 0x174288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174288u;
label_174288:
    // 0x174288: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x174288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17428c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17428cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174290: 0xc05d18e  jal         func_174638
    ctx->pc = 0x174290u;
    SET_GPR_U32(ctx, 31, 0x174298u);
    ctx->pc = 0x174294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174290u;
    // 0x174294: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174638u, 0x174290u, 0x174298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174298u;
label_174298:
    // 0x174298: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x174298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17429c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x17429cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1742a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1742a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742a4: 0xc05d1ae  jal         func_1746B8
    ctx->pc = 0x1742A4u;
    SET_GPR_U32(ctx, 31, 0x1742ACu);
    ctx->pc = 0x1742A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1742A4u;
    // 0x1742a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1746B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746B8u, 0x1742A4u, 0x1742ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742ACu;
label_1742ac:
    // 0x1742ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1742acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1742b0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1742b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1742b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1742b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742b8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1742b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1742bc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1742bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1742c0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1742c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1742c4: 0xc05d18e  jal         func_174638
    ctx->pc = 0x1742C4u;
    SET_GPR_U32(ctx, 31, 0x1742CCu);
    ctx->pc = 0x1742C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1742C4u;
    // 0x1742c8: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174638u, 0x1742C4u, 0x1742CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742CCu;
label_1742cc:
    // 0x1742cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1742ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1742d0: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x1742d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1742d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1742d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742d8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1742d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1742dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1742dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742e0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1742e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1742e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1742e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1742e8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1742e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1742ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1742ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1742f0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1742f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1742f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1742f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1742f8: 0x805d1ae  j           func_1746B8
    ctx->pc = 0x1742F8u;
    ctx->pc = 0x1742FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1742F8u;
    // 0x1742fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1746B8u;
    setXYZ2_0x1746b8(rdram, ctx, runtime); return;
    ctx->pc = 0x174300u;
}
