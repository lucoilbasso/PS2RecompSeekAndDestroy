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

// Function: sceDevVu0GetCnd
// Address: 0x1acab8 - 0x1acb98
void sceDevVu0GetCnd_0x1acab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0GetCnd_0x1acab8");
#endif

    switch (ctx->pc) {
        case 0x1acaccu: goto label_1acacc;
        default: break;
    }

    ctx->pc = 0x1acab8u;

    // 0x1acab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1acabc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1acac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1acac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1acac4: 0xc06b23e  jal         func_1AC8F8
    ctx->pc = 0x1ACAC4u;
    SET_GPR_U32(ctx, 31, 0x1ACACCu);
    ctx->pc = 0x1ACAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACAC4u;
    // 0x1acac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC8F8u, 0x1ACAC4u, 0x1ACACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACACCu;
label_1acacc:
    // 0x1acacc: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1ACACCu;
    {
        const bool branch_taken_0x1acacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACACCu;
        // 0x1acad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acacc) {
            ctx->pc = 0x1ACB88u;
            goto label_1acb88;
        }
    }
    ctx->pc = 0x1ACAD4u;
    // 0x1acad4: 0x48438000  cfc2.ni     $v1, $vi16
    ctx->pc = 0x1acad4u;
    SET_GPR_U32(ctx, 3, ctx->vu0_status);
    // 0x1acad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acadc: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x1acadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x1acae0: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x1acae0u;
    SET_GPR_U32(ctx, 3, ctx->vu0_mac_flags);
    // 0x1acae4: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x1acae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x1acae8: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x1acae8u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1acaec: 0xae030208  sw          $v1, 0x208($s0)
    ctx->pc = 0x1acaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 3));
    // 0x1acaf0: 0x4843a000  cfc2.ni     $v1, $vi20
    ctx->pc = 0x1acaf0u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(_mm_cvtsi128_si32(_mm_castps_si128(ctx->vu0_r))));
    // 0x1acaf4: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x1acaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x1acaf8: 0x4843a800  cfc2.ni     $v1, $vi21
    ctx->pc = 0x1acaf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_i, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1acafc: 0xae030210  sw          $v1, 0x210($s0)
    ctx->pc = 0x1acafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 3));
    // 0x1acb00: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x1acb00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1acb04: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1acb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1acb08: 0x48430000  cfc2.ni     $v1, $vi0
    ctx->pc = 0x1acb08u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[0]));
    // 0x1acb0c: 0xa6030218  sh          $v1, 0x218($s0)
    ctx->pc = 0x1acb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb10: 0x48430800  cfc2.ni     $v1, $vi1
    ctx->pc = 0x1acb10u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[1]));
    // 0x1acb14: 0xa603021a  sh          $v1, 0x21A($s0)
    ctx->pc = 0x1acb14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 538), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb18: 0x48431000  cfc2.ni     $v1, $vi2
    ctx->pc = 0x1acb18u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[2]));
    // 0x1acb1c: 0xa603021c  sh          $v1, 0x21C($s0)
    ctx->pc = 0x1acb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 540), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb20: 0x48431800  cfc2.ni     $v1, $vi3
    ctx->pc = 0x1acb20u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[3]));
    // 0x1acb24: 0xa603021e  sh          $v1, 0x21E($s0)
    ctx->pc = 0x1acb24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb28: 0x48432000  cfc2.ni     $v1, $vi4
    ctx->pc = 0x1acb28u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[4]));
    // 0x1acb2c: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x1acb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb30: 0x48432800  cfc2.ni     $v1, $vi5
    ctx->pc = 0x1acb30u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[5]));
    // 0x1acb34: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x1acb34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb38: 0x48433000  cfc2.ni     $v1, $vi6
    ctx->pc = 0x1acb38u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[6]));
    // 0x1acb3c: 0xa6030224  sh          $v1, 0x224($s0)
    ctx->pc = 0x1acb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb40: 0x48433800  cfc2.ni     $v1, $vi7
    ctx->pc = 0x1acb40u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[7]));
    // 0x1acb44: 0xa6030226  sh          $v1, 0x226($s0)
    ctx->pc = 0x1acb44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb48: 0x48434000  cfc2.ni     $v1, $vi8
    ctx->pc = 0x1acb48u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[8]));
    // 0x1acb4c: 0xa6030228  sh          $v1, 0x228($s0)
    ctx->pc = 0x1acb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb50: 0x48434800  cfc2.ni     $v1, $vi9
    ctx->pc = 0x1acb50u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[9]));
    // 0x1acb54: 0xa603022a  sh          $v1, 0x22A($s0)
    ctx->pc = 0x1acb54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb58: 0x48435000  cfc2.ni     $v1, $vi10
    ctx->pc = 0x1acb58u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[10]));
    // 0x1acb5c: 0xa603022c  sh          $v1, 0x22C($s0)
    ctx->pc = 0x1acb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb60: 0x48435800  cfc2.ni     $v1, $vi11
    ctx->pc = 0x1acb60u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[11]));
    // 0x1acb64: 0xa603022e  sh          $v1, 0x22E($s0)
    ctx->pc = 0x1acb64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb68: 0x48436000  cfc2.ni     $v1, $vi12
    ctx->pc = 0x1acb68u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[12]));
    // 0x1acb6c: 0xa6030230  sh          $v1, 0x230($s0)
    ctx->pc = 0x1acb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb70: 0x48436800  cfc2.ni     $v1, $vi13
    ctx->pc = 0x1acb70u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[13]));
    // 0x1acb74: 0xa6030232  sh          $v1, 0x232($s0)
    ctx->pc = 0x1acb74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 562), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb78: 0x48437000  cfc2.ni     $v1, $vi14
    ctx->pc = 0x1acb78u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[14]));
    // 0x1acb7c: 0xa6030234  sh          $v1, 0x234($s0)
    ctx->pc = 0x1acb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acb80: 0x48437800  cfc2.ni     $v1, $vi15
    ctx->pc = 0x1acb80u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[15]));
    // 0x1acb84: 0xa6030236  sh          $v1, 0x236($s0)
    ctx->pc = 0x1acb84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 566), (uint16_t)GPR_U32(ctx, 3));
label_1acb88:
    // 0x1acb88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1acb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB90u;
        // 0x1acb94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACB98u;
}
