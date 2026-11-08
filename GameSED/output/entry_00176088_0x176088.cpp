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

// Function: entry_00176088
// Address: 0x176088 - 0x176150
void entry_00176088_0x176088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176088_0x176088");
#endif

    switch (ctx->pc) {
        case 0x1760a0u: goto label_1760a0;
        case 0x1760bcu: goto label_1760bc;
        case 0x1760d4u: goto label_1760d4;
        case 0x1760ecu: goto label_1760ec;
        case 0x176108u: goto label_176108;
        case 0x176120u: goto label_176120;
        case 0x176128u: goto label_176128;
        case 0x176130u: goto label_176130;
        case 0x176144u: goto label_176144;
        default: break;
    }

    ctx->pc = 0x176088u;

    // 0x176088: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x176088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17608c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x17608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x176090: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x176090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x176094: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x176094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x176098: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x176098u;
    SET_GPR_U32(ctx, 31, 0x1760A0u);
    ctx->pc = 0x17609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176098u;
    // 0x17609c: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x176098u, 0x1760A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760A0u;
label_1760a0:
    // 0x1760a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1760a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1760a4: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x1760a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x1760a8: 0xafb10028  sw          $s1, 0x28($sp)
    ctx->pc = 0x1760a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    // 0x1760ac: 0x2610d640  addiu       $s0, $s0, -0x29C0
    ctx->pc = 0x1760acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956608));
    // 0x1760b0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1760b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1760b4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1760B4u;
    SET_GPR_U32(ctx, 31, 0x1760BCu);
    ctx->pc = 0x1760B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760B4u;
    // 0x1760b8: 0xaf828c60  sw          $v0, -0x73A0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1760B4u, 0x1760BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760BCu;
label_1760bc:
    // 0x1760bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1760bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1760c0: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x1760c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    // 0x1760c4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1760c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1760c8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1760c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1760cc: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1760CCu;
    SET_GPR_U32(ctx, 31, 0x1760D4u);
    ctx->pc = 0x1760D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760CCu;
    // 0x1760d0: 0xaf828c64  sw          $v0, -0x739C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937700), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1760CCu, 0x1760D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760D4u;
label_1760d4:
    // 0x1760d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1760d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1760d8: 0xafb10064  sw          $s1, 0x64($sp)
    ctx->pc = 0x1760d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 17));
    // 0x1760dc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1760dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1760e0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1760e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1760e4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1760E4u;
    SET_GPR_U32(ctx, 31, 0x1760ECu);
    ctx->pc = 0x1760E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760E4u;
    // 0x1760e8: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1760E4u, 0x1760ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760ECu;
label_1760ec:
    // 0x1760ec: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1760f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1760f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1760f4: 0x24a56290  addiu       $a1, $a1, 0x6290
    ctx->pc = 0x1760f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25232));
    // 0x1760f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1760f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1760fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176100: 0xc06bc60  jal         func_1AF180
    ctx->pc = 0x176100u;
    SET_GPR_U32(ctx, 31, 0x176108u);
    ctx->pc = 0x176104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176100u;
    // 0x176104: 0xaf828c6c  sw          $v0, -0x7394($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF180u, 0x176100u, 0x176108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176108u;
label_176108:
    // 0x176108: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x17610c: 0x24a56300  addiu       $a1, $a1, 0x6300
    ctx->pc = 0x17610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25344));
    // 0x176110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x176114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176118: 0xc06bc60  jal         func_1AF180
    ctx->pc = 0x176118u;
    SET_GPR_U32(ctx, 31, 0x176120u);
    ctx->pc = 0x17611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176118u;
    // 0x17611c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF180u, 0x176118u, 0x176120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176120u;
label_176120:
    // 0x176120: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x176120u;
    SET_GPR_U32(ctx, 31, 0x176128u);
    ctx->pc = 0x176124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176120u;
    // 0x176124: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x176120u, 0x176128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176128u;
label_176128:
    // 0x176128: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x176128u;
    SET_GPR_U32(ctx, 31, 0x176130u);
    ctx->pc = 0x17612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176128u;
    // 0x17612c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x176128u, 0x176130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176130u;
label_176130:
    // 0x176130: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x176130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x176134: 0xafb10088  sw          $s1, 0x88($sp)
    ctx->pc = 0x176134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 17));
    // 0x176138: 0xafb10084  sw          $s1, 0x84($sp)
    ctx->pc = 0x176138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 17));
    // 0x17613c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17613Cu;
    SET_GPR_U32(ctx, 31, 0x176144u);
    ctx->pc = 0x176140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17613Cu;
    // 0x176140: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17613Cu, 0x176144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176144u;
label_176144:
    // 0x176144: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x176144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x176148: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x176148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17614c: 0x2463d640  addiu       $v1, $v1, -0x29C0
    ctx->pc = 0x17614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956608));
    ctx->pc = 0x176150u;
}
