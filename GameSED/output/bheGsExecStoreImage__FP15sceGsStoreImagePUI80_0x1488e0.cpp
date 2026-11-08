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

// Function: bheGsExecStoreImage__FP15sceGsStoreImagePUI80
// Address: 0x1488e0 - 0x148d0c
void bheGsExecStoreImage__FP15sceGsStoreImagePUI80_0x1488e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bheGsExecStoreImage__FP15sceGsStoreImagePUI80_0x1488e0");
#endif

    switch (ctx->pc) {
        case 0x148940u: goto label_148940;
        case 0x148948u: goto label_148948;
        case 0x148968u: goto label_148968;
        case 0x148970u: goto label_148970;
        case 0x148988u: goto label_148988;
        case 0x148990u: goto label_148990;
        case 0x1489b0u: goto label_1489b0;
        case 0x1489b8u: goto label_1489b8;
        case 0x1489f0u: goto label_1489f0;
        case 0x148a2cu: goto label_148a2c;
        case 0x148a90u: goto label_148a90;
        case 0x148af0u: goto label_148af0;
        case 0x148bb8u: goto label_148bb8;
        case 0x148c14u: goto label_148c14;
        case 0x148c58u: goto label_148c58;
        case 0x148ca8u: goto label_148ca8;
        case 0x148ce4u: goto label_148ce4;
        case 0x148cecu: goto label_148cec;
        default: break;
    }

    ctx->pc = 0x1488e0u;

    // 0x1488e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1488e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1488e4: 0x24060fff  addiu       $a2, $zero, 0xFFF
    ctx->pc = 0x1488e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1488e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1488e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1488ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1488ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1488f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1488f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1488f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1488f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1488fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1488fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148900: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x148900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x148904: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x148904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x148908: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x148908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14890c: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x14890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x148910: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x148910u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x148914: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x148914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x148918: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x148918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14891c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x14891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x148920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x148920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x148924: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x148924u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x148928: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x148928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14892c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x14892cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x148930: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x148930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x148934: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x148934u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x148938: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x148938u;
    SET_GPR_U32(ctx, 31, 0x148940u);
    ctx->pc = 0x14893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148938u;
    // 0x14893c: 0x479824  and         $s3, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x148938u, 0x148940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148940u;
label_148940:
    // 0x148940: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148944: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_148948:
    // 0x148948: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14894c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148950: 0x0  nop
    ctx->pc = 0x148950u;
    // NOP
    // 0x148954: 0x0  nop
    ctx->pc = 0x148954u;
    // NOP
    // 0x148958: 0x0  nop
    ctx->pc = 0x148958u;
    // NOP
    // 0x14895c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14895Cu;
    {
        const bool branch_taken_0x14895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14895c) {
            ctx->pc = 0x148948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148948;
        }
    }
    ctx->pc = 0x148964u;
    // 0x148964: 0x0  nop
    ctx->pc = 0x148964u;
    // NOP
label_148968:
    // 0x148968: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x148968u;
    SET_GPR_U32(ctx, 31, 0x148970u);
    ctx->pc = 0x14896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148968u;
    // 0x14896c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x148968u, 0x148970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148970u;
label_148970:
    // 0x148970: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x148970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x148974: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x148974u;
    {
        const bool branch_taken_0x148974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x148978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148974u;
        // 0x148978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148974) {
            ctx->pc = 0x148968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148968;
        }
    }
    ctx->pc = 0x14897Cu;
    // 0x14897c: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x14897cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x148980: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x148980u;
    SET_GPR_U32(ctx, 31, 0x148988u);
    ctx->pc = 0x148984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148980u;
    // 0x148984: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x148980u, 0x148988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148988u;
label_148988:
    // 0x148988: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x14898c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x14898cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_148990:
    // 0x148990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148994: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148998: 0x0  nop
    ctx->pc = 0x148998u;
    // NOP
    // 0x14899c: 0x0  nop
    ctx->pc = 0x14899cu;
    // NOP
    // 0x1489a0: 0x0  nop
    ctx->pc = 0x1489a0u;
    // NOP
    // 0x1489a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1489A4u;
    {
        const bool branch_taken_0x1489a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1489a4) {
            ctx->pc = 0x148990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148990;
        }
    }
    ctx->pc = 0x1489ACu;
    // 0x1489ac: 0x0  nop
    ctx->pc = 0x1489acu;
    // NOP
label_1489b0:
    // 0x1489b0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1489B0u;
    SET_GPR_U32(ctx, 31, 0x1489B8u);
    ctx->pc = 0x1489B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1489B0u;
    // 0x1489b4: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1489B0u, 0x1489B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489B8u;
label_1489b8:
    // 0x1489b8: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x1489bc: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1489BCu;
    {
        const bool branch_taken_0x1489bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1489C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489BCu;
        // 0x1489c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489bc) {
            ctx->pc = 0x1489B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1489b0;
        }
    }
    ctx->pc = 0x1489C4u;
    // 0x1489c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1489c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1489c8: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x1489c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x1489cc: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1489ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1489d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1489d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x1489d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1489d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1489d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1489D8u;
    {
        const bool branch_taken_0x1489d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1489DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489D8u;
        // 0x1489dc: 0x3c021200  lui         $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489d8) {
            ctx->pc = 0x148A18u;
            goto label_148a18;
        }
    }
    ctx->pc = 0x1489E0u;
    // 0x1489e0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1489e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1489e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1489e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489e8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1489e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489ec: 0x0  nop
    ctx->pc = 0x1489ecu;
    // NOP
label_1489f0:
    // 0x1489f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1489f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1489f4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1489f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1489f8: 0x146000bd  bnez        $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x1489F8u;
    {
        const bool branch_taken_0x1489f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1489FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489F8u;
        // 0x1489fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489f8) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x148A00u;
    // 0x148a00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x148a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148a04: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148a08: 0x0  nop
    ctx->pc = 0x148a08u;
    // NOP
    // 0x148a0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x148A0Cu;
    {
        const bool branch_taken_0x148a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A0Cu;
        // 0x148a10: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a0c) {
            ctx->pc = 0x1489F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1489f0;
        }
    }
    ctx->pc = 0x148A14u;
    // 0x148a14: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x148a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_148a18:
    // 0x148a18: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x148a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x148a1c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x148a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x148a20: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x148a20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148a24: 0xc06af0c  jal         func_1ABC30
    ctx->pc = 0x148A24u;
    SET_GPR_U32(ctx, 31, 0x148A2Cu);
    ctx->pc = 0x148A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A24u;
    // 0x148a28: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC30u, 0x148A24u, 0x148A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A2Cu;
label_148a2c:
    // 0x148a2c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x148a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x148a30: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x148a30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a34: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x148a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x148a38: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x148a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x148a3c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148a40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x148a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x148a44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148a48: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x148a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x148a4c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x148a50: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x148a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x148a54: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x148a54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148a58: 0x34849020  ori         $a0, $a0, 0x9020
    ctx->pc = 0x148a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36896);
    // 0x148a5c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x148a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x148a60: 0x34a59010  ori         $a1, $a1, 0x9010
    ctx->pc = 0x148a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36880);
    // 0x148a64: 0x24080101  addiu       $t0, $zero, 0x101
    ctx->pc = 0x148a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x148a68: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x148a68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x148a6c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x148a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x148a70: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x148a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x148a74: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x148a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x148a78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148a7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148a80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x148A80u;
    {
        const bool branch_taken_0x148a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A80u;
        // 0x148a84: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a80) {
            ctx->pc = 0x148AB4u;
            goto label_148ab4;
        }
    }
    ctx->pc = 0x148A88u;
    // 0x148a88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x148a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a8c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x148a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_148a90:
    // 0x148a90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148a94: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x148a94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x148a98: 0x14600095  bnez        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x148A98u;
    {
        const bool branch_taken_0x148a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A98u;
        // 0x148a9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a98) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x148AA0u;
    // 0x148aa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x148aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148aa4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148aa8: 0x0  nop
    ctx->pc = 0x148aa8u;
    // NOP
    // 0x148aac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x148AACu;
    {
        const bool branch_taken_0x148aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AACu;
        // 0x148ab0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148aac) {
            ctx->pc = 0x148A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148a90;
        }
    }
    ctx->pc = 0x148AB4u;
label_148ab4:
    // 0x148ab4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x148ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x148ab8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x148ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x148abc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x148abcu;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x148ac0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x148ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x148ac4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x148AC4u;
    {
        const bool branch_taken_0x148ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AC4u;
        // 0x148ac8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ac4) {
            ctx->pc = 0x148B28u;
            goto label_148b28;
        }
    }
    ctx->pc = 0x148ACCu;
    // 0x148acc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148ad0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x148ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x148ad4: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x148ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x148ad8: 0x244343c0  addiu       $v1, $v0, 0x43C0
    ctx->pc = 0x148ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
    // 0x148adc: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x148adcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x148ae0: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x148ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x148ae4: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x148ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x148ae8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x148ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148aec: 0x0  nop
    ctx->pc = 0x148aecu;
    // NOP
label_148af0:
    // 0x148af0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148af4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x148af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x148af8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148AF8u;
    {
        const bool branch_taken_0x148af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AF8u;
        // 0x148afc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148af8) {
            ctx->pc = 0x148B18u;
            goto label_148b18;
        }
    }
    ctx->pc = 0x148B00u;
    // 0x148b00: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x148b00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148b04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x148b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148b08: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x148b08u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x148b0c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x148B0Cu;
    {
        const bool branch_taken_0x148b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B0Cu;
        // 0x148b10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b0c) {
            ctx->pc = 0x148CF4u;
            goto label_148cf4;
        }
    }
    ctx->pc = 0x148B14u;
    // 0x148b14: 0x0  nop
    ctx->pc = 0x148b14u;
    // NOP
label_148b18:
    // 0x148b18: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x148b18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148b1c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x148b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x148b20: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x148B20u;
    {
        const bool branch_taken_0x148b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B20u;
        // 0x148b24: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b20) {
            ctx->pc = 0x148AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148af0;
        }
    }
    ctx->pc = 0x148B28u;
label_148b28:
    // 0x148b28: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x148b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x148b2c: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x148b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x148b30: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x148b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x148b34: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x148b34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x148b38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x148b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x148b3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148b40: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x148b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x148b44: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x148b48: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x148b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x148b4c: 0x3c0a0080  lui         $t2, 0x80
    ctx->pc = 0x148b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)128 << 16));
    // 0x148b50: 0x34a51040  ori         $a1, $a1, 0x1040
    ctx->pc = 0x148b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4160);
    // 0x148b54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x148b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148b58: 0x34c69020  ori         $a2, $a2, 0x9020
    ctx->pc = 0x148b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36896);
    // 0x148b5c: 0x34e79010  ori         $a3, $a3, 0x9010
    ctx->pc = 0x148b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)36880);
    // 0x148b60: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x148b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148b64: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x148b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x148b68: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x148b68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x148b6c: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x148b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
    // 0x148b70: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x148b70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x148b74: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x148b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x148b78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148b7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148b80: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x148B80u;
    {
        const bool branch_taken_0x148b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B80u;
        // 0x148b84: 0x3c041200  lui         $a0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b80) {
            ctx->pc = 0x148BF0u;
            goto label_148bf0;
        }
    }
    ctx->pc = 0x148B88u;
    // 0x148b88: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148b8c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x148b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x148b90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148b94: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x148b94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x148b98: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x148b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x148b9c: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x148b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x148ba0: 0x34a53000  ori         $a1, $a1, 0x3000
    ctx->pc = 0x148ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
    // 0x148ba4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x148ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148ba8: 0x34c63c10  ori         $a2, $a2, 0x3C10
    ctx->pc = 0x148ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15376);
    // 0x148bac: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x148bb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bb4: 0x0  nop
    ctx->pc = 0x148bb4u;
    // NOP
label_148bb8:
    // 0x148bb8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x148bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x148bbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148BBCu;
    {
        const bool branch_taken_0x148bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BBCu;
        // 0x148bc0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bbc) {
            ctx->pc = 0x148BE0u;
            goto label_148be0;
        }
    }
    ctx->pc = 0x148BC4u;
    // 0x148bc4: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x148bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x148bc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x148bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148bcc: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x148bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x148bd0: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x148bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x148bd4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x148BD4u;
    {
        const bool branch_taken_0x148bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BD4u;
        // 0x148bd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bd4) {
            ctx->pc = 0x148CF4u;
            goto label_148cf4;
        }
    }
    ctx->pc = 0x148BDCu;
    // 0x148bdc: 0x0  nop
    ctx->pc = 0x148bdcu;
    // NOP
label_148be0:
    // 0x148be0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148be4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148be8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x148BE8u;
    {
        const bool branch_taken_0x148be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BE8u;
        // 0x148bec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148be8) {
            ctx->pc = 0x148BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148bb8;
        }
    }
    ctx->pc = 0x148BF0u;
label_148bf0:
    // 0x148bf0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x148bf4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x148bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x148bf8: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x148bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x148bfc: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x148bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x148c00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x148c00u;
    runtime->Store32(rdram, ctx, 0x10003C00u, GPR_U32(ctx, 0));
    // 0x148c04: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x148c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c08: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x148c08u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 0));
    // 0x148c0c: 0xc06af0c  jal         func_1ABC30
    ctx->pc = 0x148C0Cu;
    SET_GPR_U32(ctx, 31, 0x148C14u);
    ctx->pc = 0x1ABC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC30u, 0x148C0Cu, 0x148C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C14u;
label_148c14:
    // 0x148c14: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x148c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x148c18: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x148c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x148c1c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148c20: 0x244243c0  addiu       $v0, $v0, 0x43C0
    ctx->pc = 0x148c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
    // 0x148c24: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x148c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x148c28: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x148c28u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x2043C0u));
    // 0x148c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x148c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148c30: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x148c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x148c34: 0x3c070600  lui         $a3, 0x600
    ctx->pc = 0x148c34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1536 << 16));
    // 0x148c38: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x148c38u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x148c3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x148c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c40: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x148c40u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 6));
    // 0x148c44: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x148c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x148c48: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x148c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x148c4c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x148c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x148c50: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x148C50u;
    SET_GPR_U32(ctx, 31, 0x148C58u);
    ctx->pc = 0x148C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C50u;
    // 0x148c54: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x148C50u, 0x148C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C58u;
label_148c58:
    // 0x148c58: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148c5c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x148c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x148c60: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x148c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x148c64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x148c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x148c68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148c6c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x148c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x148c70: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x148c74: 0x34a59020  ori         $a1, $a1, 0x9020
    ctx->pc = 0x148c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36896);
    // 0x148c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x148c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148c7c: 0x34849010  ori         $a0, $a0, 0x9010
    ctx->pc = 0x148c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36880);
    // 0x148c80: 0x24070101  addiu       $a3, $zero, 0x101
    ctx->pc = 0x148c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x148c84: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x148c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x148c88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148c8c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x148c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x148c90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148c94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148c98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x148C98u;
    {
        const bool branch_taken_0x148c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C98u;
        // 0x148c9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c98) {
            ctx->pc = 0x148CCCu;
            goto label_148ccc;
        }
    }
    ctx->pc = 0x148CA0u;
    // 0x148ca0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x148ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x148ca4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x148ca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_148ca8:
    // 0x148ca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148cac: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x148cacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x148cb0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x148CB0u;
    {
        const bool branch_taken_0x148cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CB0u;
        // 0x148cb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148cb0) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x148CB8u;
    // 0x148cb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x148cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148cbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148cc0: 0x0  nop
    ctx->pc = 0x148cc0u;
    // NOP
    // 0x148cc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x148CC4u;
    {
        const bool branch_taken_0x148cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CC4u;
        // 0x148cc8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148cc4) {
            ctx->pc = 0x148CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148ca8;
        }
    }
    ctx->pc = 0x148CCCu;
label_148ccc:
    // 0x148ccc: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x148cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x148cd0: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x148cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x148cd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148cd8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x148cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x148cdc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x148CDCu;
    SET_GPR_U32(ctx, 31, 0x148CE4u);
    ctx->pc = 0x148CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148CDCu;
    // 0x148ce0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x148CDCu, 0x148CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CE4u;
label_148ce4:
    // 0x148ce4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x148CE4u;
    SET_GPR_U32(ctx, 31, 0x148CECu);
    ctx->pc = 0x148CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148CE4u;
    // 0x148ce8: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x148CE4u, 0x148CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CECu;
label_148cec:
    // 0x148cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x148cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148cf0:
    // 0x148cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148cf4:
    // 0x148cf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x148cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148cf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x148cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148cfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x148cfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x148d00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x148d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148d04: 0x3e00008  jr          $ra
    ctx->pc = 0x148D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D04u;
        // 0x148d08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148D0Cu;
}
