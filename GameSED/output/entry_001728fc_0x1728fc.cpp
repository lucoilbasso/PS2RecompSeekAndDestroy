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

// Function: entry_001728fc
// Address: 0x1728fc - 0x1729f0
void entry_001728fc_0x1728fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001728fc_0x1728fc");
#endif

    switch (ctx->pc) {
        case 0x172904u: goto label_172904;
        case 0x172924u: goto label_172924;
        case 0x172944u: goto label_172944;
        case 0x172950u: goto label_172950;
        case 0x172960u: goto label_172960;
        case 0x172970u: goto label_172970;
        case 0x17297cu: goto label_17297c;
        case 0x17298cu: goto label_17298c;
        case 0x1729ccu: goto label_1729cc;
        default: break;
    }

    ctx->pc = 0x1728fcu;

    // 0x1728fc: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x1728FCu;
    SET_GPR_U32(ctx, 31, 0x172904u);
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x1728FCu, 0x172904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172904u;
label_172904:
    // 0x172904: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x172904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172908: 0x3c026402  lui         $v0, 0x6402
    ctx->pc = 0x172908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25602 << 16));
    // 0x17290c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172910: 0x1619c0  sll         $v1, $s6, 7
    ctx->pc = 0x172910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
    // 0x172914: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x172914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x172918: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x172918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x17291c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17291Cu;
    SET_GPR_U32(ctx, 31, 0x172924u);
    ctx->pc = 0x172920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17291Cu;
    // 0x172920: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17291Cu, 0x172924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172924u;
label_172924:
    // 0x172924: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x172924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x172928: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17292c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17292cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x172930: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172934: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x172938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17293c: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x17293Cu;
    SET_GPR_U32(ctx, 31, 0x172944u);
    ctx->pc = 0x172940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17293Cu;
    // 0x172940: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x17293Cu, 0x172944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172944u;
label_172944:
    // 0x172944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172948: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x172948u;
    SET_GPR_U32(ctx, 31, 0x172950u);
    ctx->pc = 0x17294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172948u;
    // 0x17294c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x172948u, 0x172950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172950u;
label_172950:
    // 0x172950: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x172950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x172954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172958: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x172958u;
    SET_GPR_U32(ctx, 31, 0x172960u);
    ctx->pc = 0x17295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172958u;
    // 0x17295c: 0x522823  subu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x172958u, 0x172960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172960u;
label_172960:
    // 0x172960: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x172960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x172964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172968: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x172968u;
    SET_GPR_U32(ctx, 31, 0x172970u);
    ctx->pc = 0x17296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172968u;
    // 0x17296c: 0x712823  subu        $a1, $v1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x172968u, 0x172970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172970u;
label_172970:
    // 0x172970: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x172970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x172974: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172974u;
    SET_GPR_U32(ctx, 31, 0x17297Cu);
    ctx->pc = 0x172978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172974u;
    // 0x172978: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172974u, 0x17297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17297Cu;
label_17297c:
    // 0x17297c: 0x3c05bcbc  lui         $a1, 0xBCBC
    ctx->pc = 0x17297cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48316 << 16));
    // 0x172980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172984: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x172984u;
    SET_GPR_U32(ctx, 31, 0x17298Cu);
    ctx->pc = 0x172988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172984u;
    // 0x172988: 0x34a5bcbc  ori         $a1, $a1, 0xBCBC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48316);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x172984u, 0x17298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17298Cu;
label_17298c:
    // 0x17298c: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x17298cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x172990: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x172990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172994: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x172994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x172998: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17299c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x17299cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1729a0: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x1729a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1729a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1729a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1729a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1729a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1729ac: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x1729acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x1729b0: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x1729b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1729b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1729b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729b8: 0x2a52824  and         $a1, $s5, $a1
    ctx->pc = 0x1729b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
    // 0x1729bc: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1729bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1729c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1729c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729c4: 0xc06bb06  jal         func_1AEC18
    ctx->pc = 0x1729C4u;
    SET_GPR_U32(ctx, 31, 0x1729CCu);
    ctx->pc = 0x1729C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729C4u;
    // 0x1729c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC18u, 0x1729C4u, 0x1729CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729CCu;
label_1729cc:
    // 0x1729cc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1729ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1729d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1729d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1729d4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1729d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1729d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1729D8u;
    {
        const bool branch_taken_0x1729d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729D8u;
        // 0x1729dc: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729d8) {
            ctx->pc = 0x1729F0u;
            return;
        }
    }
    ctx->pc = 0x1729E0u;
    // 0x1729e0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1729e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1729e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1729E4u;
    {
        const bool branch_taken_0x1729e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729E4u;
        // 0x1729e8: 0x8fb3005c  lw          $s3, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729e4) {
            ctx->pc = 0x1729F8u;
            return;
        }
    }
    ctx->pc = 0x1729ECu;
    // 0x1729ec: 0x0  nop
    ctx->pc = 0x1729ecu;
    // NOP
    ctx->pc = 0x1729f0u;
}
