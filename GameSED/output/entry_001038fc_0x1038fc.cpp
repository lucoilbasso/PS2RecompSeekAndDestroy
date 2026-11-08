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

// Function: entry_001038fc
// Address: 0x1038fc - 0x103990
void entry_001038fc_0x1038fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001038fc_0x1038fc");
#endif

    switch (ctx->pc) {
        case 0x103904u: goto label_103904;
        case 0x103940u: goto label_103940;
        case 0x103984u: goto label_103984;
        default: break;
    }

    ctx->pc = 0x1038fcu;

label_1038fc:
    // 0x1038fc: 0xc068086  jal         func_1A0218
label_103900:
    if (ctx->pc == 0x103900u) {
        ctx->pc = 0x103900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038FCu;
        // 0x103900: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103904u;
        goto label_103904;
    }
    ctx->pc = 0x1038FCu;
    SET_GPR_U32(ctx, 31, 0x103904u);
    ctx->pc = 0x103900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038FCu;
    // 0x103900: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1038FCu, 0x103904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103904u;
label_103904:
    // 0x103904: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x103904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103908:
    // 0x103908: 0x11000021  beqz        $t0, . + 4 + (0x21 << 2)
label_10390c:
    if (ctx->pc == 0x10390Cu) {
        ctx->pc = 0x10390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103908u;
        // 0x10390c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103910u;
        goto label_103910;
    }
    ctx->pc = 0x103908u;
    {
        const bool branch_taken_0x103908 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103908u;
        // 0x10390c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103908) {
            ctx->pc = 0x103990u;
            return;
        }
    }
    ctx->pc = 0x103910u;
label_103910:
    // 0x103910: 0xad140010  sw          $s4, 0x10($t0)
    ctx->pc = 0x103910u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 20));
label_103914:
    // 0x103914: 0x8c47b830  lw          $a3, -0x47D0($v0)
    ctx->pc = 0x103914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_103918:
    // 0x103918: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x103918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_10391c:
    // 0x10391c: 0x24a54720  addiu       $a1, $a1, 0x4720
    ctx->pc = 0x10391cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18208));
label_103920:
    // 0x103920: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x103920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_103924:
    // 0x103924: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x103924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
label_103928:
    // 0x103928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10392c:
    // 0x10392c: 0x8ce3004c  lw          $v1, 0x4C($a3)
    ctx->pc = 0x10392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
label_103930:
    // 0x103930: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x103930u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_103934:
    // 0x103934: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x103934u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
label_103938:
    // 0x103938: 0xc0667ce  jal         func_199F38
label_10393c:
    if (ctx->pc == 0x10393Cu) {
        ctx->pc = 0x10393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103938u;
        // 0x10393c: 0xad130018  sw          $s3, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103940u;
        goto label_103940;
    }
    ctx->pc = 0x103938u;
    SET_GPR_U32(ctx, 31, 0x103940u);
    ctx->pc = 0x10393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103938u;
    // 0x10393c: 0xad130018  sw          $s3, 0x18($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F38u, 0x103938u, 0x103940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103940u;
label_103940:
    // 0x103940: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x103940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_103944:
    // 0x103944: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x103944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_103948:
    // 0x103948: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x103948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_10394c:
    // 0x10394c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10394cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_103950:
    // 0x103950: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x103950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_103954:
    // 0x103954: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x103954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_103958:
    // 0x103958: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x103958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_10395c:
    // 0x10395c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x10395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_103960:
    // 0x103960: 0x38e70002  xori        $a3, $a3, 0x2
    ctx->pc = 0x103960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
label_103964:
    // 0x103964: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x103964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_103968:
    // 0x103968: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x103968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_10396c:
    // 0x10396c: 0x67300a  movz        $a2, $v1, $a3
    ctx->pc = 0x10396cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_103970:
    // 0x103970: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x103970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_103974:
    // 0x103974: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x103974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_103978:
    // 0x103978: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x103978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_10397c:
    // 0x10397c: 0x40f809  jalr        $v0
label_103980:
    if (ctx->pc == 0x103980u) {
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103984u;
        goto label_103984;
    }
    ctx->pc = 0x10397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x103984u);
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10397Cu, 0x103984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103984u;
label_103984:
    // 0x103984: 0x10000018  b           . + 4 + (0x18 << 2)
label_103988:
    if (ctx->pc == 0x103988u) {
        ctx->pc = 0x103988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103984u;
        // 0x103988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10398Cu;
        goto label_10398c;
    }
    ctx->pc = 0x103984u;
    {
        const bool branch_taken_0x103984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103984u;
        // 0x103988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103984) {
            ctx->pc = 0x1039E8u;
            return;
        }
    }
    ctx->pc = 0x10398Cu;
label_10398c:
    // 0x10398c: 0x0  nop
    ctx->pc = 0x10398cu;
    // NOP
    ctx->pc = 0x103990u;
}
